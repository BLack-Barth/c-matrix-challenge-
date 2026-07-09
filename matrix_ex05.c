#include<stdio.h> 

int main(){// Level01 EX:05 
    int n,m; 
    printf("Enter the number of lines of matrice:"); 
    scanf("%d",&n); 
    printf("Enter the number of colomns of matrice:"); 
    scanf("%d",&m); 
    int a[n][m]; 
    int sum_line; 
    for (int i = 0; i < n; i++) 
    { 
        sum_line = 0; 
        for (int j = 0; j < m; j++) 
        { 
            printf("line%d/colomn%d:",i,j); 
            scanf("%d",&a[i][j]); 
            sum_line += a[i][j]; 
        } 
        printf("---Sum of line%d = %d----\n",i,sum_line); 
    } 
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < m; j++) 
        { 
            printf("%d",a[i][j]); 
            printf("\t"); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
