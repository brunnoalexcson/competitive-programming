/*
ID: 1065
Name: Even Between five Numbers
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1065
Date: 2024-04-03
Language: C
*/

#include <stdio.h>

int main (){
	int i, count = 0, N;
	
	for (i = 0; i < 5; i++){
		scanf("%d", &N);
		if (N % 2 == 0){
			count++;
		}
	}
	
	printf("%d valores pares\n", count);
	
	return 0;
}