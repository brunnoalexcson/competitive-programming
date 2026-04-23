/*
ID: 3357
Name: Rich of Chimarrão
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/3357
Date: 2024-11-07
Language: C++
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, count = 0;
    double L, Q;
    string S;

    cin >> N >> L >> Q;
    cin.ignore();

    vector <string> roda(N);
    for (int i = 0; i < N; i++){
        cin >> S;
        roda[i] = S;
    }

    if (L == Q || L < Q){
        cout << roda[0] << ' ' << L << endl;
    } else{
        double auxQ = Q;
        while (L - Q > 0.01){
            count++;
            Q += auxQ;
        }
        count++; // Para chegar no participante que irá beber o mate
        Q -= auxQ; // Para chegar no participante que irá beber o mate

        cout << roda[(count-1) % N] << ' ' << L - Q << endl;
    }

    return 0;
}