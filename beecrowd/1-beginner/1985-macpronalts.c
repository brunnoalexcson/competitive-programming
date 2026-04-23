/*
ID: 1985
Name: MacPRONALTS
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1985
Date: 2024-06-03
Language: C
*/

#include <stdio.h>

int main(){
    int N, ID, QTDD;
    float T = 0;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        scanf("%d%d", &ID, &QTDD);
        
        if (ID == 1001) T += QTDD*1.50;
        else if (ID == 1002) T += QTDD*2.50;
        else if (ID == 1003) T += QTDD*3.50;
        else if (ID == 1004) T += QTDD*4.50;
        else if (ID == 1005) T += QTDD*5.50;
    }
    
    printf("%.2f\n", T);
    

    return 0;
}
