/*
ID: 1064
Name: Positives and Average
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1064
Date: 2024-03-22
Language: C
*/

#include <stdio.h>

int main ()
{
	int acum = 0, N;
	float num, t = 0, m;
	
	for (N = 0; N < 6; N++)
	{
		scanf("%f",&num);
		if(num > 0)
		{
			acum++;
			t+= num;
			m = t/acum;
		}
	}
	
	printf("%d valores positivos\n%.1f\n",acum, m);
	
	return 0;
}