#include <stdio.h>
int main() {
    int i, space, rows, k = 0;
    char n;
    printf("Enter the number of rows: ");
    scanf_s("%d", &rows);
    if (rows >= 0) {
        for (i = 1; i <= rows; ++i, k = 0) {
            for (space = 1; space <= rows - i; ++space) {
                printf("  ");
            }

            for (n = 65; k != 2 * i - 1; n++) {

                if (n > 90) {
                    n = 65;
                }
                printf("%c ", n);
                ++k;
            }
            printf("\n");
        }
    }
    else printf("Error");
    return 0;
}