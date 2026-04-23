/*
ID: 1073
Name: Even Square
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1073
Date: 2024-03-24
Language: C
*/

#include <stdio.h>

int main ()
{
	int i, N, p;
	scanf("%d", &N);
	
	for (i = 2;  i <= N; i+= 2)
	{
		p = i * i;
		printf("%d^2 = %d\n", i, p);
	}
	
	return 0;
}