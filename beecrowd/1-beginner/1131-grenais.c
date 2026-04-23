/*
ID: 1131
Name: Grenais
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1131
Date: 2024-04-07
Language: C
*/

#include <stdio.h>
#include <stdbool.h>

int main (){
	
	bool continuar = true;
	int I, G, CI = 0, CG = 0, CE = 0, op = 0, p = 1;
	
	scanf("%d%d", &I, &G);
	//I = Internacional | G = Grêmio
	
	if(I > G){
		CI++;
		//CI = Contador de gols do Internacional
	}
	else if (G > I){
		CG++;
		//CG = Contador de gols do Grêmio
	}
	else if (G == I){
		CE++;
		//CE = Contador de empates;
	}
	
	while(op != 2){
	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
		scanf("%d%d", &I, &G);
		p++;
		
		if(I > G){
		CI++;
	}
	else if (G > I){
		CG++;
	}
	else if (G == I){
		CE++;
	}	
		case 2:
		continuar = false;
	}
	}
	
	if(CI > CG){
		printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n", p, CI, CG, CE);
	}
	else if(CG > CI){
		printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nGremio venceu mais\n", p, CI, CG, CE);
	}
	else if (CI == CG){
		printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nNao houve vencedor\n", p, CI, CG, CE);
	}
		
	return 0;
}