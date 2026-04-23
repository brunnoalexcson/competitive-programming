/*
ID: 1944
Name: FACE 2015 FREE GIFT
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1944
Date: 2025-04-26
Language: C++
*/

#include <iostream>
#include <stack>

using namespace std;

int main(){
    int N, count = 0;
    char l1, l2, l3, l4;
    stack <char> pilha;

    cin >> N;
    for (int i = 0; i < N; i++){
        if (pilha.empty()){
            pilha.push('F');
            pilha.push('A');
            pilha.push('C');
            pilha.push('E');
        }

        cin >> l1 >> l2 >> l3 >> l4;
    
        pilha.push(l1);
        pilha.push(l2);
        pilha.push(l3);
        pilha.push(l4);

        int V_aux[8];
        for (int i = 7; i >= 0; i--){
            V_aux[i] = pilha.top();
            pilha.pop();
        }

        if (V_aux[0] == V_aux[7] && V_aux[1] == V_aux[6] && V_aux[2] == V_aux[5] && V_aux[3] == V_aux[4]){
            count++;
        } else{
            for (int i = 0; i < 8; i++){
                pilha.push(V_aux[i]);
            }
        }
    }

    cout << count << endl;

    return 0;
}