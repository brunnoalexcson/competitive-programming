/*
ID: 1045
Name: Triangle Types
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1045
Date: 2024-03-06
Language: C
*/

#include <stdio.h>

int main()
{
    float A,B,C,aux;
    scanf("%f%f%f",&A,&B,&C);
    
    if(A<B)
    {
        aux=B;
        B=A;
        A=aux;
    }
    if(B<C)
    {
        aux=C;
        C=B;
        B=aux;
    }
    if(A<B)
    {
        aux=B;
        B=A;
        A=aux;
    }
    
    if(A>=(B+C))
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(A*A==(B*B+C*C))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if(A*A>(B*B+C*C))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(A*A<(B*B+C*C))
    {
       printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B && B==C && A==C)
    {
        printf("TRIANGULO EQUILATERO\n");
        return 0;
    }
    if(A==B || B==C || A==C)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
return 0;
}