/*
ID: 1068
Name: Parenthesis Balance I
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1068
Date: 2025-04-23
Language: C++
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string teste;
    while (cin >> teste)
    {
        cin.ignore();
        
        stack <char> pilha;
        int tam_teste = teste.length();
        for(int i = 0; i < tam_teste; i++)
        {
            if (teste[i] == '(')
            {
                pilha.push('(');
            }
            else if (teste[i] == ')')
            {
                if (!pilha.empty() && pilha.top() == '(')
                {
                    pilha.pop();
                }
                else if (pilha.empty())
                {
                    pilha.push(')');
                }
            }
        }
        
        if (pilha.empty())
        {
            cout << "correct" << endl;
        }
        else
        {
            cout << "incorrect" << endl;
        }
        
    }

    return 0;
}