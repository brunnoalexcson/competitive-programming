/*
ID: 1134
Name: Type of Fuel
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1134
Date: 2024-05-29
Language: C
*/

#include <stdio.h>

int main()
{
    int N, countA, countG, countD;
    countA = countG = countD = 0;
    
    scanf("%d", &N);
    
    while (N != 4)
    {
        switch (N)
        {
            case 1:
            countA++;
            break;
            
            case 2:
            countG++;
            break;
            
            case 3: 
            countD++;
            break;
            
            default:
            break;
        }
        
        scanf("%d", &N);
    }
    
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", countA, countG, countD);
    
    return 0;
}