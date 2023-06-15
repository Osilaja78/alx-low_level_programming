#include <stdio.h>

int is_palindrome(int number) {
    int reverse = 0, original = number;
    
    while (number != 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    
    if (original == reverse) {
        return 1;
    }
    
    return 0;
}

int main() {
    int i, j, product, largest_palindrome = 0;
    
    for (i = 100; i < 1000; i++) {
        for (j = i; j < 1000; j++) {
            product = i * j;
            
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }
    
    printf("%d", largest_palindrome);
    
    return 0;
}
