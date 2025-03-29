/*Write a C program that calculates the factorial of a given number using a function.
 ? Challenge: Implement both an iterative and a recursive version of the factorial function and
 compare their performance for large numbers.*/
 #include <stdio.h>
int factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int factorialIterative(int n) {
    int i,f;
    for(i=2;i<=n;i++) {
        f *= i;
    }
    return f;
}

main() {
    int n;
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d using recursive method: %d\n", n, factorialRecursive(n));
    printf("Factorial of %d using iterative method: %d\n", n, factorialIterative(n));
}

 
