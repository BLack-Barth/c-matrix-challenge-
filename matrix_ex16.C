#include <stdio.h>
int main(){ // Level02 | EX:16
    printf("----Searching.----\n");
    int n, m;
    printf("Enter the line of the matrice(A):");
    scanf("%d", &n);
    printf("Enter the colomn of the matrice(A):");
    scanf("%d", &m);
    int a[n][m];
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
    int target, radar = 0, x, y;
    printf("Enter the target you need to search:");
    scanf("%d", &target);
    for (int i = 0; i < n && radar == 0; i++) {
        for (int j = 0; j < m; j++) {
            if (target == a[i][j]) {
                radar = 1;
                x = i;
                y = j;
                break;
            }
        }
    }
    if (radar == 1) {
        printf("The target (%d) founded at line'%d' and colomn'%d'\n", target, x, y);
    } else {
        printf("The target (%d) not founded\n", target);
    }
    return 0;
}
