/*Write a C program that takes a string from the user and counts the number of vowels and
 consonants in the string.
 ? Challenge: Extend the program to also count digits and special characters*/
 #include<stdio.h>
 main() {
    char str[100];
    int i,vowels=0, consonants=0, digits=0, special=0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    while (str[i] != '\0') {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else {
            special++;
        }
        i++;
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    
    return 0;
}
