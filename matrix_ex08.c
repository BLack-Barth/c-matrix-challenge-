#include <stdio.h>
int main(){ // Level01 EX:08
    int n, m;
    printf("Enter the number of lines of matrice:");
    scanf("%d", &n);
    printf("Enter the number of colomns of matrice:");
    scanf("%d", &m);
    int a[n][m];
    int k;
    printf("Enter The Number k = ");
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d/colomn%d:", i, j);
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
    printf("K*A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] *= k;
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
