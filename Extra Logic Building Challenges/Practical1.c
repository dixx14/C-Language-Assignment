/*Write a C program that checks whether a given number is an Armstrong number or not (e.g.,
 153 =1^3+5^3+3^3).
 ? Challenge: Write a program to find all Armstrong numbers between 1 and 1000.*/
#include<stdio.h>
int isArmstrong(int num){
	int numOfDigit=0,rem,rev=0,ans=0,i;	
	int n=num;
	while(n!=0){
		numOfDigit++;
		n=n/10;
	}
	int m=num;
	while(m!=0){
		int a=1;
		rem=m%10;
		for(i=1;i<=numOfDigit;i++){
			a=a*rem;			
		}
		ans=ans+a;
		rev=rev*10+rem;
		m=m/10;
	}
	return ans==num;
}
void findArmstrongNumbers() {
	int i;
    printf("\nArmstrong numbers between 1 and 1000:\n");
    for (i=1;i<=1000;i++) {
        if (isArmstrong(i)) {
            printf("%d\n",i);
        }
    }
    
}

main(){
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	if(isArmstrong(num)){
		printf("\n%d is amstrong number.",num);
	}else{
		printf("\n%d is not amstrong number.",num);
	}
	findArmstrongNumbers();
}
