/*Write a C program that takes an integer from the user and calculates the sum of its digits
 using a while loop.
 Challenge: Extend the program to reverse the digits of the number*/
 #include<stdio.h>
 main(){
 	int n,sum=0,rem,rev=0;
 	printf("Enter the number to calculates the sum of its digits:");
 	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		sum=sum+rem;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("\nThe sum of its digits : %d",sum);
	printf("\nReverse number : %d",rev);
 }
