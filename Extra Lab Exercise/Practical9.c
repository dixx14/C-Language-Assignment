/* Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
 resultant matrix.
 ? Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.*/
 #include<stdio.h>
 void getUserTwoByTwoMatrixValue(int arr[2][2]){
 	int i,j;
 	for(i=0;i<2;i++){
 		for(j=0;j<2;j++){
 			printf("Enter arr[%d][%d]:",i,j);
 			scanf("%d",&arr[i][j]);
		}
	}
 }
 void displayTwoByTwoMatrix(int arr[2][2]){
 	int i,j;
 	for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
 }
 void getUserThreeByThreeMatrixValue(int arr[3][3]){
 	int i,j;
 	for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 			printf("Enter arr[%d][%d]:",i,j);
 			scanf("%d",&arr[i][j]);
		}
	}
 }
 void displayThreeByThreeMatrix(int arr[3][3]){
 	int i,j;
 	for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
 }
 main(){
 	int a[2][2],b[2][2],i,j,add[2][2],x[3][3],y[3][3],k,mul[3][3];
 	printf("First 2*2 matrix:\n");
 	getUserTwoByTwoMatrixValue(a);
 	printf("\nSecond 2*2 matrix:\n");
 	getUserTwoByTwoMatrixValue(b);
 	for(i=0;i<2;i++) {
        for (j=0;j<2;j++) {
            add[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nAddition of 2*2 matrix:\n");
    displayTwoByTwoMatrix(add);
    printf("\nFirst 3*3 matrix:\n");
 	getUserThreeByThreeMatrixValue(x);
 	printf("\nSecond 3*3 matrix:\n");
 	getUserThreeByThreeMatrixValue(y);
 	for(i=0;i<3;i++) {
        for (j=0;j<3;j++) {
        	mul[i][j]=0;
            for(k=0;k<3;k++){
            	mul[i][j]+=x[i][k]*y[k][j];	
			}
        }
    }
    printf("\nMultiplication of 3*3 matrix:\n");
    displayThreeByThreeMatrix(mul);
 }
