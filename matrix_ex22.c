#include <stdio.h>


int main(){ // Level02 | EX:22
    printf("----Find Duplicate Elements----\n");
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
    int flag = 1;
    int temp = 0;
    for (int i = 0; i < n && flag == 1; i++) {
        for (int j = 0; j < m && flag == 1; j++) {
            for (int k = 0; k < n && flag == 1; k++) {
                for (int p = 0; p < m && flag == 1; p++) {
                    if (k != i || p != j) {
                        if (a[i][j] == a[k][p]) {
                            temp = a[i][j];
                            flag = 0;
                            break;
                        }
                    }
                }
            }
        }
    }
    if (flag == 0) {
        printf("The element %d is duplicate in this matrix.\n", temp);
    } else {
        printf("No duplicate elements found!\n");
    }
    return 0;
}
