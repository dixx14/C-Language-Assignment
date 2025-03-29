/*Write a C program that takes three numbers from the user and determines:
 o The largest number.
 o The smallest number.
 Challenge:Solve the problem using both if-else and switch-case statements.
*/
#include<stdio.h>
main(){
	int a,b,c,n;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);
	if(a>b && c>b){
		if(a>c){
			n=1;	
		}else{
			n=6;
		}
	}else if(b>c && a>c){
		if(b>a){
			n=4;	
		}else{
			n=2;
		}		
	}else if(c>a && b>a){
		if(c>b){
			n=5;	
		}else{
			n=3;
		}
	}
		
	switch(n){
		case 1:
			printf("%d is largest and %d is lowest number.",a,b);
			break;
		case 2:
			printf("%d is largest and %d is lowest number.",a,c);
			break;
		case 3:
			printf("%d is largest and %d is lowest number.",b,a);
			break;
		case 4:
			printf("%d is largest and %d is lowest number.",b,c);
			break;
		case 5:
			printf("%d is largest and %d is lowest number.",c,a);
			break;
		case 6:
			printf("%d is largest and %d is lowest number.",c,b);
			break;
	}	
	
}
