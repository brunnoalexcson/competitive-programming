/*
ID: 2482
Name: Noel's Labels
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2482
Date: 2024-10-25
Language: C++
*/

#include <iostream>
#include <map>
#include <list>

using namespace std;

int main (){
    int N, M;
    string chave, valor;
    map <string, string> m1;
    list <string> language;
    list <string> nome;

    cin >> N;
    cin.ignore();
    
    for (int i = 0; i < N; i++){
        cin >> chave;
        cin.ignore();
        
        getline(cin, valor);

        m1[chave] = valor;
    }
    
    cin >> M;
    cin.ignore();
    for (int i = 0; i < M; i++){
        getline(cin, chave); // Reutilização da string chave como variável auxiliar para o nome
        nome.push_back(chave);
        
        cin >> valor;
        cin.ignore();
        valor = m1[valor];
        language.push_back(valor);
    }

    for (auto i = nome.begin(), j = language.begin(); i != nome.end(); i++, j++){
        cout << *i << endl << *j << endl;
        cout << endl;
    }

    return 0;
}