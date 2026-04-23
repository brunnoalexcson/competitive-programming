/*
ID: 2533
Name: Internship
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2533
Date: 2024-06-26
Language: C
*/

#include <stdio.h>

int main(){
	int M, N, C, SOM1, SOM2;
	
	while ( scanf("%d", &M) != EOF){
	    SOM1 = SOM2 = 0;
	    
	    for (int i = 0; i < M; i++){
	        scanf("%d%d", &N, &C);
	        SOM1 += N*C;
	        SOM2 += C*100;
	    }
	   
	    printf("%.4lf\n", (double)SOM1/SOM2);
	}
	return 0;
}
