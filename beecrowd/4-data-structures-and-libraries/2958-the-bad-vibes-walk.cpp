/*
ID: 2958
Name: The Bad Vibes Walk
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2958
Date: 2024-10-25
Language: C++
*/

#include <iostream>
#include <list>

using namespace std;
    
int main (){
    int N, M;
    cin >> N >> M;
    
    string R[N][M];
    list <string> orderedV;
    list <string> orderedD;
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> R[i][j];
            if (R[i][j][1] == 'V')
                orderedV.push_back(R[i][j]);
            else
                orderedD.push_back(R[i][j]);
        }
    }
    
    // Ordenando de forma decrescente
    orderedV.sort([](const string &a, const string &b){
        return a > b;
    });
    
    orderedD.sort([](const string &a, const string &b){
        return a > b;
    });
    
    // Imprimindo primeiro a lista dos problemas de Vida, depois os de Disciplina
    for (auto i : orderedV){
        cout << i << endl;
    }
    
    for (auto i : orderedD){
        cout << i << endl;
    }
    return 0;
}