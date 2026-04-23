/*
ID: 2554
Name: Pizza Before BH
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2554
Date: 2024-04-22
Language: C
*/

#include <stdio.h>

int main()
{
    int N, D, DD, MM, AA, num; //n° de pessoas, n° de datas, dia, mês, ano, decisão da pessoa (1 ou 0)
    int aux, auxA = 0, auxM = 0, auxD = 0, auxI = 0, cond = 0; //auxiliares para o código
    
    while(scanf("%d%d", &N, &D) != EOF){
        for (int i = 1; i <= D; i++){ //contagem do n° de datas
            scanf("%d/%d/%d", &DD, &MM, &AA);
            aux = 0;
            for(int j = 1; j <= N; j++){ //contagem do n° de pessoas 
                scanf("%d", &num);
                if (num == 1) aux++;
            }
            if (aux == N){ //caso todos possam ir na data e apenas o 1° (mais cedo) é armazenado
                if (AA > auxA && MM > auxM && DD > auxD && auxI == 0){
                    auxA = AA;
                    auxM = MM;
                    auxD = DD;
                    auxI++;
                }
                cond++; //auxiliar 'cond' p/ saber se a saída será uma data ou não
            }
        }
        auxI = 0;
        if (cond == 0) printf("Pizza antes de FdI\n");
        else printf("%d/%d/%d\n", auxD, auxM, auxA);
        auxD = auxM = auxA = 0;
        cond = 0;
    }
    return 0;
}