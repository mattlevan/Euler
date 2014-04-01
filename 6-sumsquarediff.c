#include <math.h>
#include <stdio.h>

/* Find the difference between the sum of the squares of the first one hundred
 * natural numbers and the square of the sum. */

main() {
    int counter;
    double sum, square, difference = 0;

/* sum of the natural numbers */

    sum = 100*101/2;

    printf("sum=%f.", sum);

/* sum of the squares */

    for (counter = 1; counter <= 100; counter++) {
        square += pow(counter, 2);
    }

    difference = pow(sum, 2) - square;

    printf("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is %f.\n", difference);

}
