/*
ID: 1548
Name: Canteen Queue
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1548
Date: 2024-10-25
Language: C++
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> // Para usar o sort

using namespace std;

int main (){
    int N, M, count;
    cin >> N;

    queue <int> fila;
    for (int i = 0; i < N; i++){
        cin >> M;
        vector <int> V(M);
        
        count = 0;
        for (int j = 0; j < M; j++){
            cin >> V[j]; 
            fila.push(V[j]);
        }

        sort(V.begin(), V.end(), greater<int>()); // Da maior nota até a menor nota
        for (int j = 0; j < M; j++){
            if (V[j] == fila.front())
                count++;
            fila.pop();
        }

        cout << count << endl;

    }
    
    return 0;
}