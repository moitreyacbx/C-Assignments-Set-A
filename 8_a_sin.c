#include<stdio.h>  
#include<math.h>  

 double factorial (int);

void cal (double, double *);

 
int
main () 
{
  
double x;
  
double result = 0;
  
 
printf ("Enter value of x \n");
  
scanf ("%lf", &x);
  
 
cal (x, &result);
  
 
printf ("sin %0.3lf = %0.6lf\n", x, result);
  
 
return 0;

}


 
void
cal (double num, double *sum) 
{
  
int count, n = 1, sign = 1;
  
 
for (count = 1; (n <= 100); count += 2)
    
    {
      
*sum += sign * (pow (num, count) / factorial (count));
      
n += 1;
      
sign *= -1;
    
}

}


 
double
factorial (int num) 
{
  
int count;
  
double sum = 1;
  
 
for (count = 1; count <= num; count++)
    
    {
      
sum *= count;
    
}
  
return (sum);

}