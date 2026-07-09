#include<stdio.h> 
int main(){// Level01 EX:03 
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
int sum = 0; 
int count = n * m;
//Number of elements in the array 
 for (int i = 0; i < n; i++) 
 { 
   for (int j = 0; j < m; j++) 
   { 
     printf("%d",a[i][j]); 
     printf("\t"); 
     sum += a[i][j]; 
   } 
   printf("\n"); 
 } 
  float average = (float)sum / count; 
  printf("The sum = %d\n",sum); 
  printf("The Number of elements in the array = %d\n",count); 
  printf("----Average---- = %.2f\n",average); 
  return 0; 
}
