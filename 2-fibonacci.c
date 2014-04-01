#include <stdio.h>

/* find the sum of the even-valued terms under 4 million of the Fibonacci sequence */
main()
{
    long first, second, fib, sum, max;

    first = 0;
    second = 1;
    sum = 0;
    max = 4000000;

    for (fib = 0; fib < max; fib = first + second) {
        first = second;
        second = fib;

        if (fib % 2 == 0) {
            sum += fib;
        }
    }

    printf("The sum of the even Fibonacci terms under %d is %d.\n", max, sum);
}

        

