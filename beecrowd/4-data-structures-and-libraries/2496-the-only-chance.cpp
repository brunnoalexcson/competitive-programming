/*
ID: 2496
Name: The Only Chance
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2496
Date: 2024-10-25
Language: C++
*/

#include <iostream>
#include <vector>

using namespace std;

int main (){
    int N, M;

    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> M;
        vector <char> A(M);

        int valueLetter = 65;
        int count = 0;
        for (int j = 0; j < M; j++){
            cin >> A[j];
            if (A[j] != valueLetter)
                count++;

            valueLetter++;
        }
        if (count == 2)
            cout << "There are the chance." << endl;
        else
            cout << "There aren't the chance." << endl;
    }

    return 0;
}