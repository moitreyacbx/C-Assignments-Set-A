#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double fibfor (int);

double myrec (int, double *);

double fibrec (int);

int
main () 
{
  
int n;
  
printf ("Give Number:\n");
  
scanf ("%d", &n);
  
double formula, dp, answer;
  
formula = fibfor (n);
  
dp = fibrec (n);
  
printf ("After running the program following the formula given : \n");
  
printf ("The answer comes up as %.20lf.\n", formula);
  
printf ("After running the program dynamically with memorization : \n");
  
printf ("The answer comes up as %lf.\n", dp);
  
answer = dp - formula;
  

  
printf
    ("The difference of answers between both of those approches is %le.\n",
     answer);

}


 double
fibfor (int n) 
{
   double A, B, C;
  
double answer;
  
A = 1 / pow (5, 0.5);
  
B = 1 + pow (5, 0.5);
  
C = 1 - pow (5, 0.5);
  
answer = A * ((pow (B, n) - pow (C, n)) / pow (2, n));
  
return answer;

}


double
fibrec (int n) 
{
  
double arr[n];
  
double answer;
  
for (int i = 0; i < n; i++)
    
    {
      
arr[i] = 0;
    
} 
answer = myrec (n, arr);
  
return answer;

}


double
myrec (int f, double arr[]) 
{
  
if (f == 0)
    
    {
      
return 0;
    
}
  
  else if (f == 1)
    
    {
      
return 1;
    
}
  
  else
    
    {
      
if (arr[f - 1] == 0)
	
	{
	  
arr[f - 1] = myrec (f - 1, arr) + myrec (f - 2, arr);
	
}
      
return arr[f - 1];
    
}

}