/**
 * Euclidean Algorithm in C using do-while loop
 * Computes the Greatest Common Divisor (GCD) of two integers
 * Based on the principle: GCD(a, b) = GCD(b, a mod b)
 */

#include <stdio.h>

int main() {
    int a, b, remainder;
    
    /* Get user input for two positive integers */
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    
    /* Store original values for display purposes */
    int original_a = a;
    int original_b = b;
    
    /* Validate input - ensure both numbers are positive */
    if (a <= 0 || b <= 0) {
        printf("Error: Please enter positive integers only.\n");
        return 1;
    }
    
    /**
     * Euclidean Algorithm using do-while loop
     * The loop guarantees at least one iteration
     * At each step, we replace the larger number with the remainder
     * of the larger divided by the smaller
     */
    do {
        /* Calculate remainder of a divided by b */
        remainder = a % b;
        
        /* Update a to be b, and b to be remainder */
        a = b;
        b = remainder;
        
        /* Continue loop while remainder is not zero */
    } while (b != 0);
    
    /**
     * After the loop terminates, 'a' holds the GCD
     * Because at the last iteration, remainder becomes 0
     * and 'a' takes the value of the previous 'b' (the GCD)
     */
    printf("GCD of %d and %d is: %d\n", original_a, original_b, a);
    
    return 0;
}