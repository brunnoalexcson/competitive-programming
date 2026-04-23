/*
ID: 1789
Name: The Race of Slugs
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1789
Date: 2024-07-14
Language: C
*/

#include <stdio.h>

int SlugRace(int X, int *Y);

int main (){
    int numSlugs;

    while (scanf("%d", &numSlugs) != EOF){
        if (numSlugs < 1 || numSlugs > 500) return 1;

        int V[numSlugs];

        for (int i = 0; i < numSlugs; i++){
            scanf("%d", &V[i]);
            if (V[i] < 1 || V[i] > 50) return 1;
        }
    
        int R = SlugRace(numSlugs, V);
        printf("%d\n", R);
    }

    return 0;
}

int SlugRace(int X, int *Y){
    int count = 0;

    for (int i = 0; i < X; i++){
        if (*(Y+i) >= 20) return 3;
        else if (*(Y+i) >= 10) count++;
    }
    if (count > 0) return 2;
    else return 1;
}