/*
ID: 1153
Name: Simple Factorial
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1153
Date: 2024-03-26
Language: C
*/

#include <stdio.h>

int main ()
{
	int  i, n, f = 1;
	scanf("%d",&n);
	
	for (i = n; i >= 1; i--)
	{
	    f *= i;
	}
		printf("%d\n", f);
}