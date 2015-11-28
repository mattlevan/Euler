#include <stdio.h>

/* find the sum of all the multiples of 3 or 5 below 1000. */

main()
{
    int c, sum;

    for (c = 0; c < 1000; c++) {
        if (c % 3 == 0 || c % 5 == 0) {
            sum = sum + c;
        }
    }

    printf("The sum of all multiples of 3 or 5 below 1000 is %i.\n", sum);
}
