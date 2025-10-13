#include <stdio.h>
void main() {
    char c;
    printf("Give me a letter : ");
    scanf("%c", &c);
    switch(c) {
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u':
        case 'A': 
        case 'E': 
        case 'I': 
        case 'O': 
        case 'U':
            printf("It's a vowel\n");
            break;
        default:
            printf("It's a consonant\n");
    }
}