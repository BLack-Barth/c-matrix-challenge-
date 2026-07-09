#include<stdio.h> int main(){ // level1 EX:01
  int n,m; 
  printf("Enter the number of lines of matrice:"); 
  scanf("%d",&n); 
  printf("Enter the number of colomns of matrice:"); 
  scanf("%d",&m); 
  int a[n][m]; 
  for (int i = 0; i < n; i++)
    { 
      for (int j = 0; j < m; j++) 
      { 
        printf("line%d/colomn%d:",i,j); 
        scanf("%d",&a[i][j]); 
      } 
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
