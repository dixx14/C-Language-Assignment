/* Write a C program that takes N numbers from the user and stores them in an array. The
 program should then calculate and display the sum of all array elements.
 ? Challenge: Modify the program to also find the average of the numbers.*/
#include<stdio.h>
void getUserNumbers(int arr[], int size) {
    int i;
    for (i=0;i<size;i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

int main() {
    int size,i,sum=0;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size];
    getUserNumbers(arr, size);
    for(i=0;i<size;i++) {
        sum += arr[i];
    }
    avg = (float) sum/size;
    printf("\nSum of all elements: %d\n", sum);
    printf("Average of elements: %.2f\n", avg);
}

