/* Write a C program that takes a string as input and reverses it using a function.
 ? Challenge: Write the program without using built-in string handling functions*/
#include<stdio.h>
char* reverseString(char str[]) {
    int len = 0, i;
    while (str[len] != '\0'){
        len++;
    }
    
    for (i=0;i<len/2;i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Reversed string: %s\n", reverseString(str));
}

