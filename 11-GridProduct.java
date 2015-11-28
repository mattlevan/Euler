import java.math.*;
import java.util.*;
import java.io.*;
import java.text.*;

// ProjectEuler.net Problem #11
// In the 20x20 grid of integers, find the greatest product of four adjacent
// numbers (left, right, down, up, or diagonal

public class GridProduct {
    public static void main(String[] args) throws IOException {
        File gridfile = new File("Grid.txt");
        Scanner scanner = new Scanner(gridfile);
        DecimalFormat df = new DecimalFormat("00");
        int[][] grid = new int[20][20];
        long product = 1;
        long greatest = 1;

        System.out.println(); // Blank line

        // Read gridfile (Grid.txt) into a String
        while (scanner.hasNext()) {
            // Populate grid array row-by-row
            for (int row = 0; row < 20; row++) {
                // Populate grid array column-by-column
                for (int column = 0; column < 20; column++) {
                    grid[row][column] = scanner.nextInt();
                }
            }
        }

        // Print the matrix (2D array)
        for (int row = 0; row < 20; row++) {
            for (int column = 0; column < 20; column++) {
                System.out.print(df.format(grid[row][column]) + " ");
            }
            System.out.println();
        }
        System.out.println();

        // Determine greatest product of 4 adjacent integers in matrix
        // Horizontal
        for (int row = 0; row < 20; row++) {
            for (int column = 0; column < 17; column++) {
                for (int i = column; i < column+4; i++) {
                    product *= grid[row][i];
                }
                if (product > greatest) { greatest = product; }
                product = 1;
            }
        }
        // Vertical
        for (int column = 0; column < 20; column++) {
            for (int row = 0; row < 17; row++) {
                for (int j = row; j < row+4; j++) {
                    product *= grid[j][column];
                }
                if (product > greatest) { greatest = product; }
                product = 1;
            }
        }
        // Diagonal going down and right from [0][0]
        for (int row = 0; row < 17; row++) {
            for (int column = 0; column < 17; column++) {
                for (int k = 0; k < 4; k++) {
                    product *= grid[k+row][k+column];
                }
                if (product > greatest) { greatest = product; }
                product = 1;
            }
        }
        // Diagonal going down and left from [0][19]
        for (int row = 0; row < 17; row++) {
            for (int column = 19; column > 2; column--) {
                for (int l = 0; l < 4; l++) {
                    product *= grid[l+row][column-l];
                }
                if (product > greatest) { greatest = product; }
                product = 1;
            }
        }
        System.out.println("The greatest product of 4 adjacent numbers in this" +
            " grid (horizontally, vertically, or diagonally) is " + greatest + ".");
        System.out.println();
    }
}
