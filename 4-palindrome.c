#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/* find the largest palindrome made from the product of two 3-digit numbers. */

main() {
    int a, b, i, n, value, palindrome;
    char array[i];
    palindrome = 0;

    for (a = 999; a > 99; a--) {
    
        for (b = 999; b > 99; b--) {
            value = a*b;
            i = (value == 0 ? 1 : (value == 0 ? 1 : (int)(log10(value) + 1)));

            for (n = 1; n <= i; n++) {
                array[i-n] = value % 10;
                value = value / 10;          
            }

            value = a*b;
        
            if (value > palindrome && array[0] == array[i-1] && array[1] == array[i-2] && array[2] == array[i-3]) {
                palindrome = value;
                printf("a = %d, b = %d.", a, b);
            }
        }
    }

    printf("The largest palindrome created by the product of two 3-digit numbers is: %d.", palindrome);
}
