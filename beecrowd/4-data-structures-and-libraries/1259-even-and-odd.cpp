/*
ID: 1259
Name: Even and Odd
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1259
Date: 2024-10-25
Language: C++
*/

#include <iostream>
#include <list>

using namespace std;

int main (){
    int N, num;
    list <int> par;
    list <int> impar;

    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> num;
        if (num % 2 == 0)
            par.push_back(num);
        else
            impar.push_back(num);
    }

    par.sort(); // Ordenando os pares em ordem crescente
    impar.sort([](int A, int B){
        return A > B;
    }); // Ordenando os ímpares em ordem decrescente

    for (auto i : par){
        cout << i << endl;
    }
    for (auto i : impar){
        cout << i << endl;
    }
}