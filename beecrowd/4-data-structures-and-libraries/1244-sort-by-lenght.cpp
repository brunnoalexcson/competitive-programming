/*
ID: 1244
Name: Sort by Length
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1244
Date: 2024-11-18
Language: C++
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; i++){
        vector <string> conjunto_string;
        string S;
        getline(cin, S);

        int iterator = 0;

        conjunto_string.push_back("");
        for (int j = 0; j < S.size(); j++){
            if (S[j] == ' '){
                iterator++;
                conjunto_string.push_back(""); // É necessário porque o vetor está vazio         
            }   
            else
                conjunto_string[iterator].push_back(S[j]);
        }
        
        int count = 0, maior, indice, it, tamanho_vector = conjunto_string.size();
        while (true){
            it = 0;
            if (count == tamanho_vector)
                break;

            maior = 0; 
            for (auto i : conjunto_string){
                if (i.size() > maior){
                    maior = i.size();
                    indice = it;
                }
                it++;
            }

            cout << conjunto_string[indice];
            if (count < tamanho_vector-1)
                printf(" ");

            conjunto_string.erase(conjunto_string.begin() + indice); 

            count++;
        }
        cout << endl;
    }

    return 0;
}