/*
ID: 2670
Name: Coffe Machine
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2670
Date: 2024-03-14
Language: C
*/

#include <stdio.h>

int main ()
{
  int A, B, C, A1, A2, A3, T;
  scanf ("%d%d%d", &A, &B, &C);

  A1 = C * 4 + B * 2;
  A2 = A * 2 + C * 2;
  A3 = A * 4 + B * 2;

  if (A1 < A2)
	{
	  if (A1 < A3)
		T = A1;
	  else
		T = A3;
	}
  else
	{
	  if (A2 < A3)
		
		  T = A2;
		  else
		  T = A3;
		
	}

  printf ("%d\n", T);

  return 0;
}