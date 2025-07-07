//WAP to read the charaters from a string & display the uppercase on a console

#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", &str);
    printf("Uppercase version:\n ");
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(toupper(str[i]));
    }
    printf("\nLowercase version:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(tolower(str[i]));
    }
    return 0;
}
