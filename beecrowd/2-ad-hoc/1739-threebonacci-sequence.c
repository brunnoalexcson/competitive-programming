/*
ID: 1739
Name: Threebonacci Sequence
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1739
Date: 2024-05-27
Language: C
*/

#include <stdio.h>

int main()
{
    int N, count, inc;
    long long int fib, fib1, aux, A, a;
    
    fib = fib1 = aux = 1;
    count = inc = 0;
    
    while (scanf("%d", &N) != EOF) 
    {
        while (inc < N)
        {
            A = aux;
            while (A > 0){
                a = A % 10;
                if (a == 3) count++;
                A /= 10;
            }
        
            if (aux % 3 == 0) inc++;
            else if (count > 0) inc++;

            if (inc == N) printf("%lld\n", aux);
        
            fib1 = fib;
            fib = aux;
            aux = fib + fib1;
            count = 0;
        }
    }
    
    return 0;
}