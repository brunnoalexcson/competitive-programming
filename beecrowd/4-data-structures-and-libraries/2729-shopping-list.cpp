/*
ID: 2729
Name: Shopping List
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2729
Date: 2024-12-14
Language: C++
*/

#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore(); 

    set <string> item_supermercado;
    for (int i = 0; i < N; i++){
        string S;
        getline(cin, S); // Getline lê a linha inteira

        stringstream ss(S);
        string palavra;

        while (ss >> palavra){
            item_supermercado.insert(palavra);
        }

        for (auto itr = item_supermercado.begin(); itr != item_supermercado.end(); itr++){
            if (itr != item_supermercado.begin()) cout << " ";
            cout << *itr;
        }
        cout << endl;

        item_supermercado.clear(); // Limpando a lista para ser usada no próximo caso de teste
    }
}