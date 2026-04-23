/*
ID: 1110
Name: Throwing Cards Away
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1110
Date: 2025-04-26
Language: C++
*/

#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    
    while (cin >> n && n > 0){
        
        stack <int> pilha;
        int discarded_cards[n-1];

        for (int i = n; i >= 1; i--){
            pilha.push(i);
        }

        // Pensar no caso para quando n = 1 ou n é negativo,
        int count = 0;
        while (pilha.size() >= 2){
            discarded_cards[count] = pilha.top();
            pilha.pop();
            count++;

            int auxiliar[pilha.size()];

            auxiliar[pilha.size()-1] = pilha.top();
            int A = pilha.size()-1;
            pilha.pop();
            
            for (int i = 0; i < A; i++){
                auxiliar[i] = pilha.top();
                pilha.pop();
            }

            for (int i = A; i >= 0; i--){
                pilha.push(auxiliar[i]);
            }
        }

        cout << "Discarded cards:";
        for (int i = 0; i < n-1; i++){
            cout << " " << discarded_cards[i];
            if (i < n-2) cout << ",";
        }
        cout << endl;
        
        cout << "Remaining card: " << pilha.top() << endl;
    }

    return 0;
}