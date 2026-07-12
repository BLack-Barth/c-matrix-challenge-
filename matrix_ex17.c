#include <stdio.h>
int main(){ // Level02 | EX:17
    printf("----Find Max & Matrix Coordinates.----\n");
    int n, m;
    printf("Enter the line of the matrice(A):");
    scanf("%d", &n);
    printf("Enter the colomn of the matrice(A):");
    scanf("%d", &m);
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d | colomn%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Matrice(A):\n");
    int max = a[0][0];
    int x, y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
            if (max < a[i][j]) {
                max = a[i][j];
                x = i;
                y = j;
            }
        }
        printf("\n");
    }
    printf("The Max element is %d, located at: Line %d, Column %d\n", max, x, y);
    return 0;
}
