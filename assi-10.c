//WAP to prompt the user for an existing filename and display the file on screen
#include <stdio.h>

int main() {
    char filename[100]; 
    FILE *file;         
    char ch;   
    printf("Enter the filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");


    if (file == NULL) {
        printf("Error: Could not open the file %s\n", filename);
        return 1;
    }

    printf("Contents of the file %s:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); 
    }

    fclose(file);

    return 0;
}
