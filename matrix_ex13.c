#include <stdio.h>
int main(){ // Level01 EX:13
    printf("----Sum Above Main Diagonal!.----\n");
    int n;
    printf("Enter the number of lines of matrice(A):");
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("line%d/colomn%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int sum_triangel = 0;
    printf("The Matrice(A):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            sum_triangel += a[i][j];
        }
    }
    printf("Sum Triangel = %d\n", sum_triangel);
    return 0;
}
