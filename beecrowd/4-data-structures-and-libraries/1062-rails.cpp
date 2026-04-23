/*
ID: 1062
Name: Rails
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1062
Date: 2024-10-15
Language: C++
*/

#include <iostream>
#include <stack> 

using namespace std;

int main (){
    int N;

    while (cin >> N && N != 0){
        bool org; 
        int A[N];
        
        while (cin >> A[0] && A[0] != 0){
            org = true;
            for (int i = 1; i < N; i++){
                cin >> A[i];
            }

            stack <int> station;
            
            int B[N];
            
            int aux = N; 
            int j = N-1; 
            for (int i = N-1; i >= 0; i--){
                if (A[i] == aux){ 
                    B[j] = A[i];
                    aux--;
                    j--;
                }
                else if (!station.empty() && station.top() == aux){
                    B[j] = station.top(); 
                    station.pop();
                    aux--;
                    j--;
                    i++; 
                }
                else{
                    station.push(A[i]);
                }
            }

            int k = station.size();

            for (int i = 0; i < k; i++){ 
                if (!station.empty() && station.top() == aux){
                    B[j] = station.top();
                    station.pop();
                    aux--;
                    j--;
                }
            }

            for (int i = 0; i < N && org; i++){
                if (B[i] != i+1)
                    org = false;
            }

            if (org)
                cout << "Yes" << endl;
            else 
                cout << "No" << endl; 
        }
        cout << endl;
    }

    return 0;
}