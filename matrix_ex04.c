#include<stdio.h> 
int main(){// Level01 EX:04 
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
int zero = 0; 
int positive = 0; 
int nigative = 0; 
for (int i = 0; i < n; i++) 
{ 
  for (int j = 0; j < m; j++) 
  { 
    printf("%d",a[i][j]); 
    printf("\t"); 
    if (a[i][j] >= 0) 
    { 
    positive++;// هنا متقوليش راك غالط خطرش 0 عدد موجب 
    }else 
    { 
      nigative++; 
    } 
    if (a[i][j] == 0) 
    { 
      zero++; 
    } 
  } 
  printf("\n"); 
} 
  printf("Number of zeros:%d\n",zero); 
  printf("Positive numbers:%d\n",positive); 
  printf("Nigative numbers:%d\n",nigative); 
  return 0; 
}
