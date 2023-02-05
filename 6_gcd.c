
#include<stdio.h>
#include<stdlib.h>

int
factorization (int a, int b)
{
  int gcd = 1, i, x = 2, m;
  if (a == 0 && b == 0)
    return -1;
  if (a == 0 || b == 0)
    return b;
  m = (a < b) ? a : b;
  while (x <= m)
    {
      while (a % x == 0 && b % x == 0)
	{
	  a /= x;
	  b /= x;
	  gcd *= x;
	  printf ("\n%4d | %d, %d |", x, a, b);
	}
      x++;
    }
  return gcd;
}

int
euclid (int i, int j)
{
  if (j > i)
    return euclid (j, i);
  if (j == 0)
    return i;
  else
    return euclid (j, i % j);
}

int
main ()
{
  int x, y, gcdf, gcde;
  printf ("Enter the numbers:");
  scanf ("%d%d", &x, &y);
  gcdf = factorization (x, y);
  gcde = euclid (x, y);
  if (gcdf == -1)
    {
      printf ("\nInfinity");;
      exit (1);
    }
  printf ("\nGCD with Factorization: %d", gcdf);
  printf ("\nGCD with Euclid: %d", gcde);
  return 0;
}