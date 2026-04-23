/*
ID: 1075
Name: Remaining 2
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1075
Date: 2024-03-27
Language: C
*/

#include <stdio.h>

int main (){
	int i, N;
	
	scanf("%d", &N);
	
	for (i = 1; i <= 10000; i++){
		if (i % N == 2)
		{
			printf ("%d\n", i);
		}
	}
	
	return 0;
}