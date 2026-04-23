/*
ID: 2140
Name: Two Bills
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2140
Date: 2024-04-21
Language: C++
*/

#include <iostream>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    while (N != 0 || M != 0){
        int dif = M - N;
        bool ehPossivel = false;

        if ( (2+5 == dif) || (2+10 == dif) || (2+20 == dif) || (2+50 == dif) || (2+100 == dif) 
        || (5+10 == dif) || (5+20 == dif) || (5+50 == dif) || (5+100 == dif) 
        || (10+20 == dif) || (10+50 == dif) || (10+100 == dif)
        || (20+50 == dif) || (20+100 == dif)
        || (50+100 == dif)){
            ehPossivel = true;
        }

        if (ehPossivel) cout << "possible" << endl;
        else cout << "impossible" << endl;

        cin >> N >> M;
    }

    return 0;
}