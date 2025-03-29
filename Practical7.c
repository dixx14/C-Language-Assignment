/*Write a C program that calculates the factorial of a number using a function.
 Include function declaration, definition, and call.*/
 #include<stdio.h>
 int fact(int n);
 main(){
 	int n;
 	printf("Enter number:");
 	scanf("%d",&n);
 	printf("Factorial of %d: %d", n,fact(n));
 }
 int fact(int n){
 	int i,f=1;
 	for(i=1;i<=n;i++){
 		f=f*i;
	}
	return f;
 }
