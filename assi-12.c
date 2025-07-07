//WAP to compare two file specified by the user,displaying a message indicating whether the files are identical or different
#include <stdio.h>
int main() {
    FILE *file1, *file2;
    char ch1, ch2;
    char filename1[100], filename2[100];
    printf("Enter the name of the first file: ");
    scanf("%s", filename1);
    printf("Enter the name of the second file: ");
    scanf("%s", filename2);
    file1 = fopen(filename1, "r");
    file2 = fopen(filename2, "r");
    if (file1 == NULL || file2 == NULL) {
        printf("Error: One or both files could not be opened.\n");
        return 1;
    }
    int identical = 1;
    for (ch1 = fgetc(file1), ch2 = fgetc(file2); ch1 != EOF && ch2 != EOF; ch1 = fgetc(file1), ch2 = fgetc(file2)) {
        if (ch1 != ch2) {
            identical = 0;
            break;
        }
    }
    if (ch1 != EOF || ch2 != EOF) {
        identical = 0;
    }
    if (identical) {
        printf("The files are identical.\n");
    } else {
        printf("The files are different.\n");
    }
    fclose(file1);
    fclose(file2);
    return 0;
}
