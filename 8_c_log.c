#include<stdio.h>  
#include<math.h>  

 double factorial (int);

void cal (double, double *);

 
int
main () 
{
  
double x;
  
double result = 0;
  
 
printf ("Enter value of x:\n");
  
scanf ("%lf", &x);
  
 
cal (x, &result);
  
 
printf ("log(1+%0.6f)= %0.6lf\n,",x, result);
  
 
return 0;

}


 
void
cal (double num, double *res) 
{
  
int count, n = 1, sign = 1;
  
 
for (count = 1; (n <= 100); count += 1)
    
    {

*res += sign * (pow (num, count) / count );
      
n += 1;
      
sign *= -1;
    
}

}

