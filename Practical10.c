/* Write a C program that takes two strings from the user and concatenates them
 using strcat().Display the concatenated string and its length using
 strlen()*/
#include <stdio.h>
#include <string.h>
main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
	scanf("%s",str1);    
    printf("Enter second string: ");
    scanf("%s",str2); 
    printf("Concatenated String: %s\n", strcat(str1, str2));
    printf("Length of concatenated string: %d", strlen(str1));
}

