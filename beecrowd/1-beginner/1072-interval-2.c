/*
ID: 1072
Name: Interval 2
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1072
Date: 2024-03-24
Language: C
*/

#include <stdio.h>

int main ()
{
	int i, N, X, in = 0, out = 0;
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++)
	{
		scanf("%d", &X);
		if(X >= 10 && X <= 20)
		{
			in++;
		}
		else
		{
			out++;
		}
	}
	
	printf ("%d in\n%d out\n", in, out);
	
	return 0;
}