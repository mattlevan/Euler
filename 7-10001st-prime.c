#include <stdio.h>
#include <math.h>

/* what is the 10,001st prime number? */

main() {
    int counter = 1;
    long prime, n; 
    prime = 2;
    while (counter < 10001) {
        prime++;
        for (n = prime - 1; n > 1; n--) {
            if ((prime % n) == 0) {
                break;
            }
            else if (n == 2) {
                counter++;
            }
        }
    }
    printf("The 10,001st prime number is %lu.\n", prime);
}        
