/* Write a C program to demonstrate pointer usage.Use a pointer to modify the
 value of a variable and print the result.*/
#include<stdio.h>
main(){
	int n,*ptr;
	printf("Enter number:");
	scanf("%d",&n);
	ptr=&n;
	*ptr=*ptr+10;
	printf("Modified value using pointer:%d",n);
}
