#include <iostream>
#include <string>
#include "game.hpp"

using namespace std;

void newGame() {

    string op;

    cout << "Are You Sure?\n";
    cout << "> ";
    getline(cin, op);
    
    if (op == "y" || op == "Y" || op == "Yes" || op == "yes" || op == "YES") {

        // TODO: save file, begin game 



    } else if (op == "n" || op == "N" || op == "no" || op == "No" || op == "NO") {

        return;

    } else {
        
        cerr << "Error! Please Try Again!";
        fflush(stdout);
       

    }

    

}

void loadGame() {



}