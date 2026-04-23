/*
ID: 1049
Name: Animal
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1049
Date: 2024-03-13
Language: C
*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char P1[50], P2[50], P3[50], PFinal[50];
    scanf("%s%s%s", P1, P2, P3);
    
    if(strcmp(P1, "vertebrado") == 0)
    if(strcmp(P2, "ave") == 0)
    if(strcmp(P3, "carnivoro") == 0)
    
    printf("aguia\n");
    
    else
    {
        printf("pomba\n");
    }
    
    if(strcmp(P1, "vertebrado") == 0)
    if(strcmp(P2, "mamifero") == 0)
    if(strcmp(P3, "onivoro") == 0)
    
    printf("homem\n");
    
    else
    {
        printf("vaca\n");
    }
    
    if(strcmp(P1, "invertebrado") == 0)
    if(strcmp(P2, "inseto") == 0)
    if(strcmp(P3, "hematofago") == 0)
    
    printf("pulga\n");
    
    else
    {
        printf("lagarta\n");
    }
    
    if(strcmp(P1, "invertebrado") == 0)
    if(strcmp(P2, "anelideo") == 0)
    if(strcmp(P3, "hematofago") == 0)
    
    printf("sanguessuga\n");
    
    else
    {
        printf("minhoca\n");
    }
    
    return 0;
}