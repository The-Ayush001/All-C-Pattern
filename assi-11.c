//WAP to count the nuimber of line & characters in a file
#include <stdio.h>
int main() {
    FILE *file;
    char ch;
    int lines = 0, chars = 0; 
    char filename[100];
    printf("Enter the filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open the file %s\n", filename);
        return 1;
    }
    for (ch = fgetc(file); ch != EOF; ch = fgetc(file)) {
        chars++;
        if (ch == '\n') { 
            lines++; 
        }
    }
    if (chars > 0 && ch != '\n') {
        lines++;
    }
    printf("Total number of lines: %d\n", lines);
    printf("Total number of characters: %d\n", chars);
    fclose(file);
    return 0;
}
