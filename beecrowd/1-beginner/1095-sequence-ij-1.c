/*
ID: 1095
Name: Sequence IJ 1
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1095
Date: 2024-03-25
Language: C
*/

#include <stdio.h>

int main ()
{
	int I, J;
	
	for(I = 1, J = 60; J >= 0; I+= 3, J -= 5)
	{
		printf("I=%d J=%d\n", I, J);
	}
	
	return 0;
}
