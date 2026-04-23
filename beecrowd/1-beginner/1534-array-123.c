/*
ID: 1534
Name: Array 123
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1534
Date: 2024-06-01
Language: C
*/

#include <stdio.h>

int
main ()
{
  int N;

  while (scanf ("%d", &N) != EOF)
	{
	  int M[N][N];

	  for (int i = 0; i < N; i++)
		{
		  for (int j = 0; j < N; j++)
			{
			  M[i][j] = 3;
			}
		}

	  for (int i = 0; i < N; i++)
		{
		  M[i][i] = 1;
		}

	  for (int i = 0, j = N - 1; i < N; i++, j--)
		{
		  M[i][j] = 2;
		}

	  for (int i = 0; i < N; i++)
		{
		  for (int j = 0; j < N; j++)
			{
			  printf ("%d", M[i][j]);
			}
		  printf ("\n");
		}
	}
	
  return 0;
}