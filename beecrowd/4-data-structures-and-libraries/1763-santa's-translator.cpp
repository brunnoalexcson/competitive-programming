/*
ID: 1763
Name: Santa's Translator
Platform: Beecrowd
Link: https://judge.beecrowd.com/en/problems/view/1763
Date: 2024-10-25
Language: C++
*/

#include <iostream>
#include <map>

using namespace std;

int main (){
    map <string, string> app; 
    app["brasil"] = "Feliz Natal!";
    app["alemanha"] = "Frohliche Weihnachten!";
    app["austria"] = "Frohe Weihnacht!";
    app["coreia"] = "Chuk Sung Tan!";
    app["espanha"] = "Feliz Navidad!";
    app["grecia"] = "Kala Christougena!";
    app["estados-unidos"] = "Merry Christmas!";
    app["inglaterra"] = "Merry Christmas!";
    app["australia"] = "Merry Christmas!";
    app["portugal"] = "Feliz Natal!";
    app["suecia"] = "God Jul!";
    app["turquia"] = "Mutlu Noeller";
    app["argentina"] = "Feliz Navidad!";
    app["chile"] = "Feliz Navidad!";
    app["mexico"] = "Feliz Navidad!";
    app["antardida"] = "Merry Christmas!";
    app["canada"] = "Merry Christmas!";
    app["irlanda"] = "Nollaig Shona Dhuit!";
    app["belgica"] = "Zalig Kerstfeest!";
    app["italia"] = "Buon Natale!";
    app["libia"] = "Buon Natale!";
    app["siria"] = "Milad Mubarak!";
    app["marrocos"] = "Milad Mubarak!";
    app["japao"] = "Merii Kurisumasu!";
    
    string S;
    while (cin >> S){
        auto it = app.find(S);
        if (it != app.end())
            cout << it->second << endl; 
        else 
            cout << "--- NOT FOUND ---" << endl;
    }

    return 0;
}