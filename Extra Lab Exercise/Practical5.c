/*Write a C program that checks whether a given number is a prime number or not using a for
 loop.
Challenge: Modify the program to print all prime numbers between 1 and a givennumber*/
 #include<stdio.h>
 main(){
 	int n,i,j,c1=0;
 	printf("Enter the number:");
 	scanf("%d",&n);
 	printf("Prime numbers between 1 and %d:",n);
 	for(i=1;i<=n;i++){
 		if(n%i==0){
 			c1++;	
		}
		int c2=0;
		if(i!=1 && i!=n){
			for(j=1;j<=i;j++){
				if(i%j==0){
					c2++;
				}		
			}
			if(c2==2){
				printf("%d\t",i);
			}
		}
	}
	if(c1==2){
		printf("\n%d is prime number.",n);
	}else{
		printf("\n%d is not prime number.",n);
	}
 }
