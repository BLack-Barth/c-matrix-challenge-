#include <stdio.h>


int main(){ // Level02 | EX:21
    printf("----Matrix Transpose & Storage----\n");
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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d | colomn%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    int temp = 0;
    int b[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = a[j][i];
        }
    }
    printf("Transpose matrice:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
  
    return 0;
}
