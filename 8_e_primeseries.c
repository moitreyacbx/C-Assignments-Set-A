
#include <stdio.h>
#include <math.h>
int isprime (long long);

int
main () 
{
  long long n, s = 0, num[2000], sum = 0, x, i;
  
printf ("Enter the No of Terms:\n");
  
scanf ("%lld", &n);
  
for (i = 2; i < pow (n, 2); i++)
    
    {
      if (isprime (i))
	
	{
	  num[s] = i;
	  
s++;
	}
    
}
  
x = num[0];
  
for (int j = 1; j <= n; j++)
    
    {
      
sum += x * num[j];
      
x = num[j];
    
} 
printf ("%lld", sum);
  
return 0;

}


int
isprime (long long x) 
{
  for (int i = 2; i < x; i++)
    
    {
      if (x % i == 0)
	
	{
	  return 0;
	
}
    
}
  
return 1;

 
}

