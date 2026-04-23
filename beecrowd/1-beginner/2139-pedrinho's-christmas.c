/*
ID: 2139
Name: Pedrinho's Christmas
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2139
Date: 2024-04-12
Language: C
*/

#include <stdio.h>

int main(){
	int M, D, d;

	while (scanf("%d%d", &M, &D) != EOF)
	{
		if(M == 1)
		{
			d = (30*4 + 6*31 + 29 + 25) - D; // Contagem de 12 meses
        	printf("Faltam %d dias para o natal!\n", d);
		}
	
		else if (M == 2){
			d = (30*4 + 5*31 + 29 + 25) - D; // Contagem de 11 meses
			printf("Faltam %d dias para o natal!\n", d);

		}
		
		else if (M == 3){
			d = (30*4 + 5*31 + 25) - D; // Contagem de 10 meses
			printf("Faltam %d dias para o natal!\n", d);

		}
		else if (M == 4){
			d = (30*4 + 4*31 + 25) - D; // Contagem de 9 meses
					        printf("Faltam %d dias para o natal!\n", d);

		}
		else if (M == 5){
			d = (30*3 + 4*31 + 25) - D; // Contagem de 8 meses
					        printf("Faltam %d dias para o natal!\n", d);

		}
		else if (M == 6){
			d = (30*3 + 3*31 + 25) - D; // Contagem de 7 meses
					        printf("Faltam %d dias para o natal!\n", d);

		}
		else if (M == 7){
			d = (30*2 + 3*31 + 25) - D; // Contagem de 6 meses
					        printf("Faltam %d dias para o natal!\n", d);

		}
		else if (M == 8){
			d = (30*2 + 2*31 + 25) - D; // Contagem de 5 meses
					        printf("Faltam %d dias para o natal!\n", d);

		}
		else if (M == 9){
			d = (30*2 + 31 + 25) - D; // Contagem de 4 meses
					        printf("Faltam %d dias para o natal!\n", d);

		}
		else if (M == 10){
			d = (30 + 31 + 25) - D; // Contagem de 3 meses
					        printf("Faltam %d dias para o natal!\n", d);

		}
		else if (M == 11){
			d = (30 + 25) - D; // Contagem de 2 meses
					        printf("Faltam %d dias para o natal!\n", d);

		}
		else if (M == 12){
		    if(D == 24)
		    {
		        printf("E vespera de natal!\n");
		    }
		    else if (D == 25)
		    {
		        printf("E natal!\n");
		    }
		    else if (D > 25)
		    {
		        printf("Ja passou!\n");
		    }
		    else if (D < 24)
		    {
		        d = 25 - D;
		        printf("Faltam %d dias para o natal!\n", d);
		    }
		    
		}
		d = 0;
	}
    return 0;
}