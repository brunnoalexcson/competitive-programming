/*
ID: 1155
Name: S Sequence
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1155
Date: 2024-03-27
Language: C
*/

#include <stdio.h>

int main (){
	
	int i;
	float S = 0;
	
	for (i = 1; i <= 100; i++)
	{
		S += (float)1/i;
	}
	
	printf("%.2f\n", S);
	
	return 0;
}