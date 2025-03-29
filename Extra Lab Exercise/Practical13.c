/*Write a C program that takes a number as input and checks whether it is a palindrome using
 a function.
 ? Challenge: Modify the program to check if a given string is a palindrome.*/
#include<stdio.h>
#include<string.h>
int checkNumPalindrome(int n) {
    int org = n, rev = 0, rem;
    while (n > 0) {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return org==rev;
}

int checkStrPalindrome(char str[]) {
    int i,len=strlen(str);
    for (i=0;i<len/2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

main() {
    int num;
    char str[100];
    printf("Enter a number: ");
    scanf("%d", &num);
    if(checkNumPalindrome(num)){
        printf("%d is a palindrome.\n", num);
    }else{
        printf("%d is not a palindrome.\n", num);
    }
    
    printf("Enter a string: ");
    scanf("%s", str);
    if (checkStrPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
}

