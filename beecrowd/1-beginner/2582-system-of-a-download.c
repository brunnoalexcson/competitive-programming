/*
ID: 2582
Name: System of a Download
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2582
Date: 2024-04-07
Language: C
*/

#include <stdio.h>

int main(){
	int C, I = 0, X, Y, T;
	
	scanf("%d", &C);
	
	while (I != C){
		I++;
		scanf("%d%d", &X, &Y);
		T = X + Y;
		if(T == 0){
			printf("PROXYCITY\n");
		}
		else if (T == 1){
			printf("P.Y.N.G.\n");
		}
		else if (T == 2){
			printf("DNSUEY!\n");
		}
		else if (T == 3){
			printf("SERVERS\n");
		}
		else if (T == 4){
			printf("HOST!\n");
		}
		else if (T == 5){
			printf("CRIPTONIZE\n");
		}
		else if (T == 6){
			printf("OFFLINE DAY\n");
		}
		else if (T == 7){
			printf("SALT\n");
		}
		else if (T == 8){
			printf("ANSWER!\n");
		}
		else if (T == 9){
			printf("RAR?\n");
		}
		else if (T == 10){
			printf("WIFI ANTENNAS\n");
		}
	}

    return 0;
}