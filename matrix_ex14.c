#include <stdio.h>
int main(){ // Level01 EX:14
    printf("----Sum Below Main Diagonal!.----\n");
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
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            sum_triangel += a[i][j];
        }
    }
    printf("Sum Triangel = %d\n", sum_triangel);
    return 0;
}
