#include <stdio.h>


int main(){ // Level02 | EX:24
    printf("---Matrix Equality Check----\n");
    int n, m;
    printf("Enter the line of the matrice(A):");
    scanf("%d", &n);
    printf("Enter the colomn of the matrice(A):");
    scanf("%d", &m);
    if (n < 0 || m < 0) {
        printf("You can't beat my program, hahahaha.\n");
        return 0;
    }
    int a[n][m];
    int b[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d | colomn%d:", i, j);
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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d | colomn%d:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("The Matrice(B):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    int flag = 1;
    for (int i = 0; i < n && flag == 1; i++) {
        for (int j = 0; j < m && flag == 1; j++) {
            if (a[i][j] != b[i][j]) {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1) {
        printf("Matrices are equal\n");
    } else {
        printf("Matrices are NOT equal\n");
    }
    return 0;
}
