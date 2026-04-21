/*
ID: 1019
Name: Time Conversion
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1019
Date: 2024-02-26
Language: C
*/

#include <stdio.h>

int main(){
    int N, hora, minuto, min, segundo, seg;
    
    scanf("%d",&N);
    
    if(N>3599){
        hora = N/3600;
        printf("%d:",hora);
    } else if(N<3600){
        hora = 0;
        printf("%d:",hora);
    }
    
    minuto = N-(hora*3600);
    
    if(N>59){
        min = minuto/60;
        printf("%d:",min);
    }
    if(N<60){
        minuto = 0;
        printf("%d:",min);
    }
    
    segundo = N-(hora*3600+min*60);
    
    if(N>0){
        seg = segundo/1;
        printf("%d\n",seg);
    } else if(N<1){
        segundo = 0;
        printf("%d\n",seg);
    }
    
    return 0;
}