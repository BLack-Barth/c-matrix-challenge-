#include <stdio.h>
int main(){ // Level01 EX:09
    printf("To add two arrays, they must have the same lines and columns.\n");
    int n, m;
    printf("Enter the number of lines of matrice(A):");
    scanf("%d", &n);
    printf("Enter the number of colomns of matrice(B):");
    scanf("%d", &m);
    int a[n][m];
    int x, y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d/colomn%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Matrice(A):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Enter the number of lines of matrice(B):");
    scanf("%d", &x);
    printf("Enter the number of colomns of matrice(B):");
    scanf("%d", &y);
    int b[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("line%d/colomn%d:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("The Matrice(B):\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d", b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    if (x != n && y != m) {
        printf("\nError: This operation cannot be calculated by the program. Go review the matrices lesson in algebra2.(lol)\n");
        return 0;
    }
    int c[n][m];
    printf("Calculate A + B = \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d", c[i][j]);
            printf("\t");
            c[i][j] = 0;
        }
        printf("\n");
    }
    return 0;
}
