/*
ID: 1069
Name: Diamonds and Sand
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1069
Date: 2025-04-23
Language: C++
*/

#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    string teste;
    for (int i = 0; i < n; i++){
        cin >> teste;
        int tam_teste = teste.length();
        
        int count = 0;
        stack <char> d;
        for (int j = 0; j < tam_teste; j++){
            if (teste[j] == '<'){
                d.push('<');
            }
            else if (teste[j] == '>'){
                if (!d.empty()){
                    if(d.top() == '<'){
                        count++;
                        d.pop();
                    }
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}