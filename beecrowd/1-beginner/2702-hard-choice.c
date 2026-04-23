/*
ID: 2702
Name: Hard Choice
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2702
Date: 2024-06-27
Language: C
*/

#include <stdio.h>

int main(){
    int Fa, Ba, Ma, Fr, Br, Mr, count;
    count = 0;
    
    scanf("%d%d%d%d%d%d", &Fa, &Ba, &Ma, &Fr, &Br, &Mr);
    
    if (Fr > Fa) count += Fr - Fa;
    if (Br > Ba) count += Br - Ba;
    if (Mr > Ma) count += Mr - Ma;
    
    printf("%d\n", count);

    return 0;
}
