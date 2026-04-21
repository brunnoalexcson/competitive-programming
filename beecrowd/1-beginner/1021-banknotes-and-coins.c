/*
ID: 1021
Name: Banknotes and Coins
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1021
Date: 2024-02-26
Language: C
*/

#include <stdio.h>

int main(){
    float valor, quanti6;
    int valor1, valor2, valor3, valor4, valor5, valor6;
    int quanti1, quanti2, quanti3, quanti4, quanti5;
    
    scanf("%f",&valor);
    printf("NOTAS:\n");
    
    valor1 = (valor/100);
    printf("%d nota(s) de R$ 100.00\n",valor1);
    
    
    valor2 = (valor-(valor1*100))/50;
    printf("%d nota(s) de R$ 50.00\n",valor2);
    
    valor3 = (valor-(valor1*100+valor2*50))/20;
    printf("%d nota(s) de R$ 20.00\n",valor3);
    
    valor4 = (valor-(valor1*100+valor2*50+valor3*20))/10;
    printf("%d nota(s) de R$ 10.00\n",valor4);
    
    valor5 = (valor-(valor1*100+valor2*50+valor3*20+valor4*10))/5;
    printf("%d nota(s) de R$ 5.00\n",valor5);
    
    valor6 = (valor-(valor1*100+valor2*50+valor3*20+valor4*10+valor5*5))/2;
    printf("%d nota(s) de R$ 2.00\n",valor6);
    
    printf("MOEDAS:\n");
    
    quanti1 = (valor-(valor1*100+valor2*50+valor3*20+valor4*10+valor5*5+valor6*2))/1;
    printf("%d moeda(s) de R$ 1.00\n",quanti1);
    
    quanti2 = (valor-(valor1*100+valor2*50+valor3*20+valor4*10+valor5*5+valor6*2+quanti1*1))/0.5;
    printf("%d moeda(s) de R$ 0.50\n",quanti2);
    
    quanti3 = (valor-(valor1*100+valor2*50+valor3*20+valor4*10+valor5*5+valor6*2+quanti1*1+quanti2*0.5))/0.25;
    printf("%d moeda(s) de R$ 0.25\n",quanti3);
    
    quanti4 = (valor-(valor1*100+valor2*50+valor3*20+valor4*10+valor5*5+valor6*2+quanti1*1+quanti2*0.5+quanti3*0.25))/0.1;
    printf("%d moeda(s) de R$ 0.10\n",quanti4);
    
    quanti5 = (valor-(valor1*100+valor2*50+valor3*20+valor4*10+valor5*5+valor6*2+quanti1*1+quanti2*0.5+quanti3*0.25+quanti4*0.1))/0.05;
    printf("%d moeda(s) de R$ 0.05\n",quanti5);
    
    quanti6 = (valor-(valor1*100+valor2*50+valor3*20+valor4*10+valor5*5+valor6*2+quanti1*1+quanti2*0.5+quanti3*0.25+quanti4*0.1+quanti5*0.05))/0.01;
    printf("%.0f moeda(s) de R$ 0.01\n",quanti6);
    
    return 0;
}