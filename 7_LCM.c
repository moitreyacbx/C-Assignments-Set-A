#include<stdio.h>
int gcd (int, int);

int
main () 
{
  int n, num[100], i, j = 1, s;
  
 
printf ("Enter the no of integers:\n");
  
scanf ("%d", &n);
  
for (i = 0; i < n; i++)
    
    {
      printf ("Enter Number:\n");
      
scanf ("%d", &num[i]);
    }
  
int lcm = num[0];
  
for (j = 1; j < n; j++)
    
    {
      s = gcd (num[j], lcm);
      
lcm = (lcm * num[j]) / s;
    }
if(lcm!=0)  
{printf ("The LCM of numbers is %d\n", lcm);}
else 
printf("Cannot Be Calculated,undefined.\n");
 
}


int
gcd (int i, int j) 
{
  
if (j == 0)
    
return i;
  
  else
    
return gcd (j, i % j);

}
