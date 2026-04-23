/*
ID: 1154
Name: Ages
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1154
Date: 2024-03-27
Language: C
*/

#include <stdio.h>
#include <stdbool.h>

int main ()
{
    bool continuar = true;
	int  N, i, s = 0, count = 0;
	float m = 0;
	
	for (i = 0; i >= 0 && continuar; i++)
	{
	    scanf("%d", &i);
	    if (i<0)
	    {
	        continuar = false;
	    }
	    else
	    {
	        s += i;
	        count++;
	        m = (float)s/count;
	    }
	}
	printf ("%.2f\n", m);
	return 0;
}