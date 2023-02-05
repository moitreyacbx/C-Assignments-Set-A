
#include <stdio.h>
#include <math.h>
int isprime(int);
int main()
{ int n,num[100];
  printf("Enter the No of Terms:\n");
  scanf("%d",&n);
   {
  printf("The prime numbers from 1 to %d are:\n",n);
  for(int i=2;i<n;i++)
     {if(isprime(i))
        scanf("%d,",num[i]);
      }
    for(int i=2;i<n;i++)
       {
         printf("%d",num[i]);
       }
       return 0;
}
}
int isprime(int x)
{ for(int i=2;i<=sqrt(x);i++)
     { if(x%i==0)
     { return 0;
        }
     }
return 1;
     
}
