#include <stdio.h>
#include <math.h>
/* what is the largest prime factor of the number 600851475143? */
main() {
    long number, square, solution, divisor;
    number = 600851475143;
    square = sqrt(600851475143);
    divisor = 2;
    solution = 0;
    int found = 0;
    for (number; square > 0; square--) {
        if (number % square == 0) {
            for (divisor = 2; divisor < square; divisor++) {
                if ((square % divisor) == 0) {
                    break;
                }   
                else if (divisor == square - 1) {
                    solution = square;
                    found = 1;
                }      
            }
        }        
        if (found == 1) {
            break;
        } 
    }
    printf("%d is the largest prime factor of %lu.\n", solution, number);    
} 
