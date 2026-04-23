/*
ID: 1281
Name: Going to the Market
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1281
Date: 2024-10-25
Language: C++
*/

#include <iostream>
#include <map>
#include <iomanip> 

using namespace std;

int main (){
    int N, M, P, qtdd;
    float price, R;
    string F;

    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> M;
        map <string, float> fair; 

        R = 0;
        for (int j = 0; j < M; j++){
            cin >> F >> price;
            cin.ignore();

            fair[F] = price;
        }

        cin >> P;
        for (int j = 0; j < P; j++){
            cin >> F >> qtdd;
            cin.ignore();

            R += fair[F] * qtdd;
        }
        cout << "R$ " << fixed << setprecision(2) << R << endl;
    }

    return 0;
}