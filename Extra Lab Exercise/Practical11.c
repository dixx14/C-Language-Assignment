/*Write a C program that generates the Fibonacci sequence up to N terms using a recursive
 function.
 ? Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative
 and recursive methods. Compare their efficiency.*/
 #include<stdio.h>
 int fibonacciRecursive(int n){
 	if(n <= 1){
 		return n;
	}
	return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2); 
 }
 int fibonacciIterative(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, temp,i;
    for (i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

 main(){
 	int n,i,ans;
    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &n);
    printf("\nFibonacci sequence: ");
    for(i=0;i<n;i++){
    	printf("%d\t",fibonacciRecursive(i));
	}	
	printf("\n\nNth Fibonacci number using recursive method: %d\n", fibonacciRecursive(n - 1));
    printf("Nth Fibonacci number using iterative method: %d\n", fibonacciIterative(n - 1));
 }



