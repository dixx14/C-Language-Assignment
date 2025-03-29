/* Write a C program that generates Pascal’s Triangle up to N rows using loops.
 ? Challenge: Implement the same program using a recursive function.*/
 #include<stdio.h>
 main() {
    int n,i,k,j;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);
    
    printf("\nPascal's Triangle using loops:\n");
    for (i=0;i<n;i++) {
        for(k=i;k<=n;k++){
			printf(" ");
		}
		int val = 1;
        for (j=0;j<=i;j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
