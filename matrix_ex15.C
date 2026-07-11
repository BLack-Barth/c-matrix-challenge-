#include <stdio.h>
int main(){ // Level01 EX:15
    printf("----Boundary Elements Sum!.----\n");
    int n;
    printf("Enter the size of the matrice(A):");
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("line%d/colomn%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int sum_boundary = 0;
    printf("The Matrice(A):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1) {
                sum_boundary += a[i][j];
            } else if (i != 0 || i != n - 1) {
                j = 0;
                sum_boundary += a[i][j];
                j = n - 1;
                sum_boundary += a[i][j];
            }
        }
    }
    printf("Sum Boundary = %d\n", sum_boundary);
    return 0;
}
