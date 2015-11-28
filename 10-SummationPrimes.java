import java.util.*;
import java.math.*;

// ProjectEuler.net Problem #10
// find the sum of all the primes below two million.

public class SummationPrimes {
    public static void main(String[] args) {
        long total = 2000000;
        BigInteger sum = new BigInteger("2"); // start sum @ 2 because 2 is the first prime
        for (long prime = 3; prime < total; prime++) { // loop to total
            if (isPrime(prime) == true) {
                sum = sum.add(BigInteger.valueOf(prime));
            }
        }
        System.out.println("The sum of all primes under " + total + " is: " + sum);
    }

    public static boolean isPrime(long n) {
        if (n < 2) {
            return false;
        }
        if (n == 2 || n == 3) {
            return true;
        }
        if (n%2 == 0 || n%3 == 0) {
            return false;
        }
        long sqrtN = (long)Math.sqrt(n)+1;
        for(long i = 6L; i <= sqrtN; i += 6) {
            if (n%(i-1) == 0 || n%(i+1) == 0) {
                return false;
            }
        }
        return true;
    }
}
