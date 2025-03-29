/* Write a C program that takes an integer input from the user and prints its multiplication
 table using a for loop.
 Challenge: Allow the user to input the range of the multiplication table(e.g.,from1toN).*/
 #include<stdio.h>
 main(){
 	int n,r,i;
 	printf("Enter the number to print its multiplication table:");
 	scanf("%d",&n);
 	printf("Enter the range of the multiplication table:");
 	scanf("%d",&r);
 	if(r<=10){
 		for(i=1;i<=r;i++){
	 		printf("%d * %d = %d\n",n,i,n*i);
		}	
	}else{
		printf("Please enter valid range of the multiplication table.");
	}
 	
 }
