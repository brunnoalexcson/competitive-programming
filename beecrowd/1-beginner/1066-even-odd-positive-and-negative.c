/*
ID: 1066
Name: Even, Odd, Positive and Negative
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1066
Date: 2024-03-24
Language: C
*/

#include <stdio.h>

int main ()
{
	int i, num, cp = 0, ci = 0, cpo = 0, cn = 0;
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		if(num % 2 == 0)
		{
			cp++;
		}
		else if(num % 2 != 0)
		{
			ci++;
		}
		if(num > 0)
		{
			cpo++;
		}
		else if(num < 0)
		{
			cn++;
		}
	}
	
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", cp, ci, cpo, cn);
		
    return 0;
}