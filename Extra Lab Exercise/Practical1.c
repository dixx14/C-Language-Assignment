/*Write a C program that acts as a simple calculator.The program should take two numbers
 and an operator as input from the user and perform the respective operation(addition,
 subtraction,multiplication,division,ormodulus)using operators.
Challenge: Extend the program to handle invalid operator inputs.*/
#include<stdio.h>
main(){
	int n1,n2;
	char op;
	printf("Enter Operator [+,-,*,/,%]:");
	scanf("%c",&op);
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	switch(op){
		case '+':
			printf("\nAddition: %d+%d=%d",n1,n2,n1+n2);
			break;
		case '-':
			printf("\nSubtraction: %d-%d=%d",n1,n2,n1-n2);
			break;
		case '*':
			printf("\nMultiplication: %d*%d=%d",n1,n2,n1*n2);
			break;
		case '/':
			printf("\nDivision: %d/%d=%.2f",n1,n2,(float)n1/n2);
			break;
		case '%':
			printf("\nModulus: %d %% %d=%d",n1,n2,n1%n2);
			break;			
		default:
			printf("\nPlease enter valid operator");
			break;
	}
}
 
