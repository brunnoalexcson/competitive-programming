/*
ID: 2764
Name: Date Input and Output
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2764
Date: 2024-04-18
Language: C
*/

#include <stdio.h>

int main()
{
    int DD, MM, AA;
    
    while (scanf("%d/%d/%d", &DD, &MM, &AA) != EOF){
        printf("%02d/%02d/%02d\n%02d/%02d/%02d\n%02d-%02d-%02d\n", MM, DD, AA, AA, MM, DD, DD, MM, AA);
    }
    
    return 0;
}
