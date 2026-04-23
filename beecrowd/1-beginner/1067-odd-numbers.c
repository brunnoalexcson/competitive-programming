/*
ID: 1067
Name: Odd Numbers
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1067
Date: 2024-03-24
Language: C
*/

#include <stdio.h>

int main ()
{
	int i, X;
	scanf("%d", &X);
	
	for (i = 1;  i <= X; i+= 2)
	{
		printf("%d\n", i);
	}
	
	return 0;
}