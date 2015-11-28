import java.util.*;
import java.io.*;

// ProjectEuler.net Problem #9
// Find Pythagorean triplet (a, b, and c) such that a+b+c=1000

public class Pythagorean {
    public static void main(String[] args) {
        int a = 0;
        int b = 0;
        int c = 0;

        for (c = 1; c < 1000; c++)
            for (b = 1; b < c; b++)
                for (a = 1; a < b; a++)
                    if (a * a + b * b == c * c)
                        if (a + b + c == 1000)
                            System.out.println("a = " + a + " b = " + b + " c = " + c);
    }
}
        


