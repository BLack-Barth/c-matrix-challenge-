#include<stdio.h> 

int main(){ //Level : 01 | EX : 02
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
  int max = a[0][0]; 
  int min = a[0][0]; 
  for (int i = 0; i < n; i++) 
  { 
    for (int j = 0; j < m; j++) 
    { 
      printf("%d",a[i][j]); 
      printf("\t"); 
      if (max < a[i][j]) 
      { 
        max = a[i][j]; 
      } 
      if (min > a[i][j]) 
      { 
        min = a[i][j]; 
      } 
    } 
    printf("\n"); 
  } 
  printf("Maximum:%d\n",max); 
  printf("Minimum:%d\n",min); 
  return 0; 
}
