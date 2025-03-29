/* Write a C program that takes an integer from the user and checks the following using
 different operators:
 o Whether the number is even or odd.
 o Whether the number is positive, negative, or zero.
 o Whether the number is a multiple of both 3 and 5.*/
 #include<stdio.h>
 main(){
 	int n;
 	printf("Enter the number:");
 	scanf("%d",&n);
 	if(n%2==0){
 		printf("%d is even number.",n);	
	}else{
		printf("%d is odd number.",n);	
	}
	
	if(n==0){
		printf("\n%d is zero number.",n);
	}else if(n>0){
		printf("\n%d is positive number.",n);
	}else {
		printf("\n%d is negative number.",n);
	}
	
	if (n % 15 == 0){
        printf("\n%d is multiple of 3 and 5.",n);
    }else{
    	printf("\n%d is not multiple of 3 and 5.",n);
	}
 }
