#include<stdio.h>  
#include<math.h>  

 double factorial (int);

double cal (double);

 
int
main () 
{
  
double x;
  
double result = 0;
  
 
printf ("Enter value of x \n");
  
scanf ("%lf", &x);
  
 
result = cal (x);
  
 
printf ("e= %0.6lf\n", result);
  
 
return 0;

}


double cal (double num) 
{
  
int count;
double res;
  
 
for (count = 0; count<=num; count++)
    
    {
      
res +=  count / factorial (count);
    
    
}
return res;

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
 

 
 