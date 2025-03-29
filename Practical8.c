/* Write a C program that stores 5 integers in a one-dimensional array and prints
 them.Extend this to handle a two-dimensional array(3x3matrix) and
 calculate the sum of all elements.*/
 #include<stdio.h>
 main(){
 	int a[5],i,j,b[3][3],sum=0;
 	printf("Enter 5 integer for One dimensional array\n");
 	for(i=0;i<5;i++){
 		printf("Enter number a[%d]:",i);
		scanf("%d",&a[i]);	
	}
	printf("One dimensional array:");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	printf("\nEnter 9 integer for  3*3 matrix 2D array\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
			sum=sum+b[i][j];
		}	
	}
	printf("\n2D Array[3*3 matrix]:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");	
	}
	printf("\nThe sum of all elements:%d",sum);
 }
