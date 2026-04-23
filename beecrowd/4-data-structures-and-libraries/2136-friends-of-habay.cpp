/*
ID: 2136
Name: Friends of Habay
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/2136
Date: 2025-04-26
Language: C++
*/

#include <iostream>
#include <list>

using namespace std;

int main(){
    string name, op;

    list <string> habay_yes;
    list <string> habay_no;

    while (cin >> name && name != "FIM"){
        cin >> op;
        cin.ignore();

        if (op == "NO"){
            habay_no.push_back(name);
        }
        else{
            bool push_list = true;
            for (auto it = habay_yes.begin(); it != habay_yes.end(); it++){
                if (name == *it){
                    push_list = false;
                }
            }
            if (push_list){
                habay_yes.push_back(name);
            }
        }
    }

    string habay_friend;
    int name_size = 0;

    for (auto it = habay_yes.begin(); it != habay_yes.end(); it++){
        if (it->size() > name_size){
            name_size = it->size();
            habay_friend = *it;
        }
    }

    habay_yes.sort();
    habay_no.sort();

    for (auto it = habay_yes.begin(); it != habay_yes.end(); it++){
        cout << *it << endl;
    }

    for (auto it = habay_no.begin(); it != habay_no.end(); it++){
        cout << *it << endl;
    }
    cout << endl;

    cout << "Amigo do Habay:" << endl << habay_friend << endl;

    return 0;
}