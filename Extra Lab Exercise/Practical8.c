/* Write a C program that accepts 10 integers from the user and stores them in an array. The
 program should then find and print the maximum and minimum values in the array.
 ? Challenge: Extend the program to sort the array in ascending order*/
 #include<stdio.h>
 main(){
 	int a[10],i,max,min,j,temp;
 	printf("Enter 10 integers:");
 	for(i=0;i<10;i++){
 		scanf("%d",&a[i]);
	}
	max=min=a[0];
	for(i=0;i<10;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    
    for(i=0;i<10;i++){
    	for(j=i+1;j<10;j++){
    		if(a[i]>a[j]){
    			temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
			}
		}
	}
	printf("Sorted array in ascending order: ");
	for(i=0;i<10;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
 }
