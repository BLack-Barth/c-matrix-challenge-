#include <stdio.h>
int main(){ // Level01 EX:10
    printf("An identity matrix is a matrix whose diagonal contains the numbers 1 and the rest are zeros!.\n");
    printf("And The matrix must be square.\n");
    int n, m;
    printf("Enter the number of lines of matrice(A):");
    scanf("%d", &n);
    printf("Enter the number of colomns of matrice(A):");
    scanf("%d", &m);
    if (n != m) {
        printf("I warned you about the conditions above, why don't you pay attention?hmm They don't focus, then they say math is difficult.\n");
        return 0;
    }
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("line%d/colomn%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int I = 1; // I = Identity
    printf("The Matrice(A):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j && a[i][j] != 1) {
                I = 0;
                break;
            }
            if (i != j && a[i][j] != 0) {
                I = 0;
                break;
            }
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    if (I == 1) {
        printf("The Matrix (A) is Identity\n");
    } else {
        printf("The Matrice (A) is not Identity\n");
    }
    return 0;
}
