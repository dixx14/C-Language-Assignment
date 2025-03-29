 /*Write a C program to check if a number is even or odd using an if-else
 statement.Extend the program using a switch statement to display the month
 name based on the user’s input(1 for January, 2 for February, etc.).*/
 #include<stdio.h>
 main(){
 	int n,choice;
 	printf("Enter the number to check even or odd:");
 	scanf("%d",&n);
 	if(n%2==0){
 		printf("%d is even number.",n);
	}else{
		printf("%d is odd number.",n);
	}
	printf("\npress 1 for January.");
	printf("\npress 2 for February.");
	printf("\npress 3 for March.");
	printf("\npress 4 for April.");
	printf("\npress 5 for May.");
	printf("\npress 6 for June.");
	printf("\npress 7 for July.");
	printf("\npress 8 for August.");
	printf("\npress 9 for September.");
	printf("\npress 10 for October.");
	printf("\npress 11 for November.");
	printf("\npress 12 for December.");
	printf("\nEnter choosing number:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\nJanuary");
			break;
		case 2:
			printf("\nFebruary");
			break;
		case 3:
			printf("\nMarch");
			break;
		case 4:
			printf("\nApril");
			break;
		case 5:
			printf("\nMay");
			break;
		case 6:
			printf("\nJune");
			break;
		case 7:
			printf("\nJuly");
			break;
		case 8:
			printf("\nAugust");
			break;
		case 9:
			printf("\nSeptember");
			break;
		case 10:
			printf("\nOctober");
			break;
		case 11:
			printf("\nNovember");
			break;
		case 12:
			printf("\nDecember");
			break;
		default:
			printf("\n Choosing wrong number.");
			break;
	}
 }
