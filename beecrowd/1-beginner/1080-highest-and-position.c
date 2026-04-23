/*
ID: 1080
Name: Highest and Position
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1080
Date: 2024-03-27
Language: C
*/

#include <stdio.h>

int main ()
{
	int i, N, MN, IN;
	
	for (i = 1; i <= 100; i++)
	{
		scanf("%d",&N);
		if(N > MN)
		{
			MN = N;
			IN = i;
		}
	}
	printf("%d\n%d\n",MN, IN);
	return 0;
}