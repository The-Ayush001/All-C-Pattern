//Write a program that receives strings from keybord & writes them into a file.
#include <stdio.h>
int main() {
    FILE *file; 
    char str[100];
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    printf("Enter strings to write into the file (type 'exit' to stop):\n");

    while (1) {
        printf("Enter string: ");
        fgets(str, sizeof(str), stdin);
        if (strncmp(str, "exit", 4) == 0) {
            break;
        }
        fputs(str, file);
    }
    fclose(file);
    printf("Strings written to the file successfully.\n");
    return 0;
}