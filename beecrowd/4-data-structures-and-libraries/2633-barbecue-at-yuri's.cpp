/*
ID: 2633
Name: Barbecue at Yuri's
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2633
Date: 2024-10-25
Language: C++
*/

#include <iostream>
#include <map>
#include <list>

using namespace std;

int main(){
    int N, D, count;
    string S;

    while (cin >> N){
        count = 0;

        map <int, string> churras;
        list <int> ordered;
        for (int i = 0; i < N; i++){
            cin >> S >> D;
            cin.ignore();

            ordered.push_back(D);
            churras[D] = S;
        }
        ordered.sort();
        for (auto i : ordered){
            cout << churras[i];
            if (count < N-1)
                cout << ' ';
            else
                cout << endl;
            count++;
        }
    }
    
    return 0;
}