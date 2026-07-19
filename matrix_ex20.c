#include <stdio.h>


int main(){ // Level02 | EX:20
    printf("----Symmetric Matrix Check----\n");
    printf("For example A = A(t)\n");
    printf("And It's should be square matrice.\n");
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
    printf("The Matrice(A):\n");
    int flag = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for (int i = 0; i < n && flag == 1; i++) {
        for (int j = 0; j < n && flag == 1; j++) {
            if (a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1) {
        printf("The Matrice(A) is symmetric.\n");
    } else {
        printf("Th Matrice(A)is not symmetric.\n");
    }
    return 0;
}
