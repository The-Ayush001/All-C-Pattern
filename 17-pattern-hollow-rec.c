#include <stdio.h>
int main() {
    int width, height;
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    printf("Enter the height of the rectangle: ");
    scanf("%d", &height);
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            if (i == 1 || i == height || j == 1 || j == width) {
                printf("*\t");
            } else {
                printf(" \t");
            }
        }
        printf("\n");
    }
    return 0;
}
