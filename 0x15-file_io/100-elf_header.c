#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 128

/**
 * print_elf_header - prints necessary elf headers.
 * @ehdr: ehdr
 *
 * Return: nothing.
 */
void print_elf_header(Elf64_Ehdr *ehdr)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", ehdr->e_ident[i]);
	printf("\n");

	printf("Class: %s\n", ehdr->e_ident[EI_CLASS] \
		== ELFCLASS64 ? "ELF64" : "Invalid Class");
	printf("Data: %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? \
		"2's complement, little endian" : "Invalid data encoding");
	printf("Version: %d (current)\n", ehdr->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", ehdr->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", ehdr->e_type);
	printf("Entry point address: 0x%lx\n", ehdr->e_entry);
}

/**
 * main - entry point.
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr ehdr;
	ssize_t n;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: could not open file '%s'\n", argv[1]);
		exit(98);
	}

	n = read(fd, &ehdr, sizeof(ehdr));
	if (n == -1)
	{
		fprintf(stderr, "Error: could not read ELF header\n");
		exit(98);
	}

	if (n != sizeof(ehdr) || ehdr.e_ident[EI_MAG0] != ELFMAG0 || \
		ehdr.e_ident[EI_MAG1] != ELFMAG1 || ehdr.e_ident[EI_MAG2] \
		!= ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: file '%s' is not an ELF file\n", argv[1]);
		exit(98);
	}

	print_elf_header(&ehdr);

	close(fd);
	return (0);
}

