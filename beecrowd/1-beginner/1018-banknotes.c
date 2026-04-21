/*
ID: 1018
Name: Banknotes
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1018
Date: 2024-02-25
Language: C
*/

#include <stdio.h>
#include <math.h>

int main (){
    int valor, valor2, valor3, valor4, valor5, valor6, valor7, val100, val50, val20, val10, val5, val2, val1;
    
    scanf("%d",&valor);
    printf("%d\n", valor);
    
    if(valor>99) {
        val100 = valor/100;
        printf("%.0d nota(s) de R$ 100,00\n",val100);
    } else if(valor<100) {
        val100 = 0;
        printf("%d nota(s) de R$ 100,00\n",val100);
    }
    
    valor2 = valor-(val100*100);
    
    if(valor2>49) {
        val50 = valor2/50;
        printf("%.0d nota(s) de R$ 50,00\n",val50);
    } else if(valor2<50) {
        val50 = 0;
        printf("%d nota(s) de R$ 50,00\n",val50);
    }
    
    valor3 = valor-(val100*100+val50*50);
    
    if(valor3>19) {
        val20 = valor3/20;
        printf("%.0d nota(s) de R$ 20,00\n",val20);
    } else if(valor3<20) {
        val20 = 0;
        printf("%d nota(s) de R$ 20,00\n",val20);
    }
    
    valor4 = valor-(val100*100+val50*50+val20*20);

    if(valor4>9){
        val10 = valor4/10;
        printf("%.0d nota(s) de R$ 10,00\n",val10);
    } else if(valor4<10){
        val10 = 0;
        printf("%d nota(s) de R$ 10,00\n",val10);
    }

    valor5 = valor-(val100*100+val50*50+val20*20+val10*10);

    if(valor5>4){
        val5 = valor5/5;
        printf("%.0d nota(s) de R$ 5,00\n",val5);
    } else if(valor5<5){
        val5 = 0;
        printf("%d nota(s) de R$ 5,00\n",val5);
    }
    
    valor6 = valor-(val100*100+val50*50+val20*20+val10*10+val5*5);

    if(valor6>1){
        val2 = valor6/2;
        printf("%.0d nota(s) de R$ 2,00\n",val2);
    } else if(valor6<2){
        val2 = 0;
        printf("%d nota(s) de R$ 2,00\n",val2);
    }
    
    valor7 = valor-(val100*100+val50*50+val20*20+val10*10+val5*5+val2*2);

    if(valor7>0){
        val1 = valor7/1;
        printf("%.0d nota(s) de R$ 1,00\n",val1);
    } else if(valor7<1){
        val1 = 0;
        printf("%d nota(s) de R$ 1,00\n",val1);
    }
    
    return 0;
}
