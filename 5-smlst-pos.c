#include <stdio.h>
#include <math.h>

/* find the smallest positive number that is evenly disible by 1-20. */

main() {
    long value, smallest = 0;
    int flag = 0;

    for (value = 900; flag == 0; value++) { 

        if ((value%20 == 0) && (value%19==0) && (value%18==0) && (value%17==0) && (value%16==0) && (value%15==0) && (value%14==0) && (value%13==0) && (value%12==0) && (value%11==0) && (value%10==0) && (value%9==0) && (value%8==0) && (value%7==0) && (value%6==0) && (value%5==0) && (value%4==0) && (value%3==0) && (value%2==0)) {
            smallest = value;
            flag = 1;
        }
    }
           
    if (flag == 1) {
            printf("The smallest positive number that is evenly divisible by 1-20 is %d.", smallest);
        }
}
