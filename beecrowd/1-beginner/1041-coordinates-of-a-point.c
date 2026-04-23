/*
ID: 1041
Name: Coordinates of a Point
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1041
Date: 2024-03-01
Language: C
*/

#include <stdio.h>

int main (){
    float x, y;
    scanf("%f",&x);
    scanf("%f",&y);
    
    if (x==0 && y==0){
        printf("Origem\n");
    }
    else{
        if(x==0){
            printf("Eixo Y\n");
        }
        if(y==0){
            printf("Eixo X\n");
        }
        if(x>0 && y>0){
            printf("Q1\n");
        }
        if(x>0 && y<0){
            printf("Q4\n");
        }
        if(x<0 && y>0){
            printf("Q2\n");
        }
        if(x<0 && y<0){
            printf("Q3\n");
        }
    }
    
    return 0;
}