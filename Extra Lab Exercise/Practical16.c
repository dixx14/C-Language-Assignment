/* Write a C program that counts the number of words in a sentence entered by the user.
 ? Challenge: Modify the program to find the longest word in the sentence*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

main() {
    char sentence[100],longest_word[100];
    int word_count = 0,max_length = 0;
    
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    int length = strlen(sentence),current_length = 0,in_word = 0,i;
    char current_word[100];

    for (i=0;sentence[i]!='\0';i++) {
        if (isalnum(sentence[i])) { 
            current_word[current_length++] = sentence[i];
            in_word = 1;
        } else if (in_word) {
            current_word[current_length] = '\0';
            if (current_length > max_length) {
                max_length = current_length;
                strcpy(longest_word, current_word);
            }
            word_count++;
            current_length = 0;
            in_word = 0;
        }
    }
    
    if (in_word) {
        current_word[current_length] = '\0';
        if (current_length > max_length) {
            max_length = current_length;
            strcpy(longest_word, current_word);
        }
        word_count++;
    }
    
    printf("Total words: %d\n", word_count);
    printf("Longest word: %s (Length: %d)\n", longest_word, max_length);

}



