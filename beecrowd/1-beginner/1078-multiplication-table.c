/*
ID: 1078
Name: Multiplication Table
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1078
Date: 2024-03-24
Language: C
*/

#include <stdio.h>

int main ()
{
	int i, N;
	scanf("%d", &N);
	
	for (i = 1;  i <= 10; i++)
	{
		printf("%d x %d = %d\n", i, N, i*N);
	}
	
	return 0;
}
