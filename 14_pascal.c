#include <stdio.h>

int fact(int n) {
   int i;
   
   for(i = 1; n > 1; n--)
      i *= n;
      
   return i;
}

int ncr(int n,int r) {
   return fact(n) / ( fact(n-r) * fact(r) );
}

int main() {
   int n, i, j;

  printf("Enter number of terms:\n");
  scanf("%d",&n);

   for(i = 0; i <n; i++) {
      for(j = 0; j <n-i; j++)
         printf("  ");
         
      for(j = 0; j <= i; j++)
         printf(" %3d", ncr(i, j));

      printf("\n");
   }
   return 0;
}