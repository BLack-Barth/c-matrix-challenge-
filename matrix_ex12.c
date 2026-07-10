#include <stdio.h>
int main(){ // Level01 EX:12
    printf("----To calculate Secondary Diagonal Sum, it must be square!.----\n");
    int n, m;
    printf("Enter the number of lines of matrice(A):");
    scanf("%d", &n);
    printf("Enter the number of colomns of matrice(A):");
    scanf("%d", &m);
    if (n != m) {
        printf("Son?\n");
        return 0;
    }
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d/colomn%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int sum_diagonale = 0;
    printf("The Matrice(A):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; j--) {
            if (j + i == m - 1) {
                sum_diagonale += a[i][j];
                break;
            }
        }
    }
    printf("Sum Diagonal = %d\n", sum_diagonale);
    return 0;
}
