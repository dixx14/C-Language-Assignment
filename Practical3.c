/*Write a C program that accepts two integers from the user and performs
 arithmetic, relational, and logical operations on them.Display the results
*/
#include<stdio.h>
main(){
	int n1,n2,sum,sub,mul,mod;
	float div;
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	sum=n1+n2;
	sub=n1-n2;
	mul=n1*n2;
	div=(float)n1/n2;
	mod=n1%n2;
	//Arithmetic operations Example
	printf("\nAddition: %d+%d=%d",n1,n2,sum);
	printf("\nSubtraction: %d-%d=%d",n1,n2,sub);
	printf("\nMultiplication: %d*%d=%d",n1,n2,mul);
	printf("\nDivision: %d/%d=%.2f",n1,n2,div);
	printf("\nModulus: %d %% %d=%d",n1,n2,mod);
	//Relational operations Example
	if(n1>n2){
		printf("\nMaximum number is %d and Minimum number is %d.", n1,n2);
	}else{
		printf("\nMaximum number is %d and Minimum number is %d.", n2,n1);
	}
	//Logical operations Example
	if (n1 % 2 == 0 && n2 % 2 == 0) {
        printf("\nBoth numbers are even.");
    }
    else if (n1 % 2 != 0 && n2 % 2 != 0) {
        printf("\nBoth numbers are odd.");
    }
    else {
        printf("\nOne number is even and the other is odd.");
    }
	
}
