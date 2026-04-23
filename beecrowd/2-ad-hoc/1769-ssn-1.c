/*
ID: 1769
Name: SSN 1
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1769
Date: 2024-05-13
Language: C
*/

#include <stdio.h>

int main()
{
    char CPF[14] = {0}; //Inicializando todas as posições do vetor como 0
    int b1, b2; //1° e 2° verificador

    while (scanf(" %c", &CPF[0]) != EOF)
    {
        for (int i = 1; i < 14; i++)
        {
            scanf(" %c", &CPF[i]); //Armazenando cada posição do vetor de entrada
        }
        
        for (int i = 0; i < 14; i++)
        {
            if (i == 3 || i == 7 || i == 11) i++;
            CPF[i] -= '0'; //Transformando o caracter em um valor inteiro
        }
        
        // Cálculo para verificação:
        
        b1 = ( (CPF[0] * 1) + (CPF[1] * 2) + (CPF[2] * 3) + (CPF[4] * 4) + (CPF[5] * 5) + (CPF[6] * 6) + (CPF[8] * 7) + (CPF[9] * 8) + (CPF[10] * 9) ) % 11;
        b2 = ( (CPF[0] * 9) + (CPF[1] * 8) + (CPF[2] * 7) + (CPF[4] * 6) + (CPF[5] * 5) + (CPF[6] * 4) + (CPF[8] * 3) + (CPF[9] * 2) + (CPF[10] * 1) ) % 11;
        
        if (b1 == 10) b1 = 0;
        if (b2 == 10) b2 = 0;
        
        if (b1 == CPF[12] && b2 == CPF[13]) printf("CPF valido\n");
        else printf("CPF invalido\n");
    }
    
    return 0;
}
