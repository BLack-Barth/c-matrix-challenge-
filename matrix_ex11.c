#include <stdio.h>
int main(){ // Level01 EX:11
    printf("----To calculate the diameter of the matrix, it must be square!.----\n");
    int n, m;
    printf("Enter the number of lines of matrice(A):");
    scanf("%d", &n);
    printf("Enter the number of colomns of matrice(A):");
    scanf("%d", &m);
    if (n != m) {
        printf("Go back and review the arrays. Don't tire me out. Close the program. Close.\n");
        return 0;
    }
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d/colomn%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int sum_diagonale;
    printf("The Matrice(A):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {
                sum_diagonale += a[i][j];
                break;
            }
        }
    }
    printf("Sum Diagonal = %d\n", sum_diagonale);
    return 0;
}
