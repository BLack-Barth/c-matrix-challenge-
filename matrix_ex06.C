#include <stdio.h>
int main() { // Level01 EX:05
    int n, m;
    printf("Enter the number of lines of matrice:");
    scanf("%d", &n);
    printf("Enter the number of colomns of matrice:");
    scanf("%d", &m);
    int a[n][m];
    int sum = 0;
    int sum_colomn = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d/colomn%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            sum += a[i][j];
        }
        sum_colomn += sum;
        printf("sum of colomn%d = %d\n", j, sum_colomn);
        sum = 0;
        sum_colomn = 0;
    }
    return 0;
}
