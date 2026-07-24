#include <stdio.h>


int main(){ // Level02 | EX:25
    printf("---Identity Matrix Check---\n");
    int n, m;
    printf("Enter the line of the matrice(A):");
    scanf("%d", &n);
    printf("Enter the colomn of the matrice(A):");
    scanf("%d", &m);
    if (n < 0 || m < 0) {
        printf("You can't beat my program, hahahaha.\n");
        return 0;
    }
    if (n != m) {
        printf("lines should be equal colomns\n");
        return 0;
    }
    int a[n][m];
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
    int flag = 1;
    for (int i = 0; i < n && flag == 1; i++) {
        for (int j = 0; j < n && flag == 1; j++) {
            if (i == j && a[i][j] != 1) {
                flag = 0;
                break;
            }
            if (i != j && a[i][j] != 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1) {
        printf("The Matrix is an Identity Matrix.\n");
    } else {
        printf("The Matrix is NOT an Identity Matrix.\n");
    }

    return 0;
}
