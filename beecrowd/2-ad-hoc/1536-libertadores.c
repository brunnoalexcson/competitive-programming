/*
ID: 1536
Name: Libertadores
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1536
Date: 2024-04-19
Language: C
*/

#include <stdio.h>

int main()
{
    int T, T1M, T2V, T2M, T1V, T1, T2, SGT1, SGT2;
    
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++){
        scanf("%d x %d", &T1M, &T2V);
        scanf("%d x %d", &T2M, &T1V);
        
        T1 = T1M + T1V;
        T2 = T2V + T2M;
        
        SGT1 = (T1M + T1V) - (T2M + T2V);
        SGT2 = (T2V + T2M) - (T1M + T1V);
        
        
        if (T1 > T2){
            printf("Time 1\n");
        }
        else if (T2 > T1){
            printf("Time 2\n");
        }
        else if (T1 == T2){
            if(SGT1 > SGT2){
                printf("Time 1\n");
            }
            else if(SGT2 > SGT1){
                printf("Time 2\n");
            }
            else{
                if(T1V > T2V){
                    printf("Time 1\n");
                }
                else if(T2V > T1V){
                    printf("Time 2\n");
                }
                else{
                    printf("Penaltis\n");
                }
            }
        }
    }
    
    return 0;
}