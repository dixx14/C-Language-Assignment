/* Write a C program to print numbers from 1 to 10 using all three types of loops
 (while,for,do-while).*/
#include<stdio.h>
main(){
	int n=1,i,j=1;
	printf("Using while loop:");
	while(n<=10){
		printf("%d\t",n);
		n++;
	}
	printf("\nUsing for loop:");
	for(i=1;i<=10;i++){
		printf("%d\t",i);
	}
	printf("\nUsing do while loop:");
	do{
		printf("%d\t",j);
		j++;
	}
	while(j<=10);
}
