//write a c file copy program which copies any user file
#include <stdio.h>
int main() {
    FILE *sourceFile, *destinationFile;
    char ch;
    char sourceFilename[100], destinationFilename[100];
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFilename);
    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFilename);
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open the source file.\n");
        return 1;  
    }
    destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        printf("Error: Could not open the destination file.\n");
        fclose(sourceFile); 
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);  
    }
    printf("File copied successfully.\n");
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
