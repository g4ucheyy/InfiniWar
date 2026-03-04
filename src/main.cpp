/*
AUTHOR: GAUCHEY/FARIS
DATE: 26/2/2026
VERSION: 0.1
*/

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "gameMenu.hpp"
#include "game.hpp"



using namespace std;

int main() {

    string input;
    string input2;
    int select;

    while(true) {
        
        cout << "\n===== InfiniWar =====" << endl;
        cout << "[1] Play\n";
        cout << "[2] About\n";
        cout << "[3] Quit\n";
        cout << "> ";

        try {
            getline(cin, input);
            select = stoi(input);
            if (select > 3 || select < 1) {
                cerr << "Invalid input! Please Enter Between 1-3\n";
                continue;
            }
        } catch (const invalid_argument e) {
            cerr << "Invalid input! Please Enter a Number.\n";
            continue;
        }

        switch(select) {
            case 1: {
                // TODO: Game selection and execution
                gameMenu();
                    getline(cin, input2);
                    try { // try catch blocc here 
                        int gameSelect = stoi(input2);
                        if (gameSelect == 1) {
                            newGame();
                        } else if (gameSelect == 2) {
                            loadGame();
                        } else {
                            cerr << "Invalid Input! Please Try Again.";
                            continue;
                        }
                    } catch (const std::invalid_argument& e) {
                        cerr << "Invalid Input! Please Enter a Number." << endl;
                        continue;
                    }
                    break;
            }
                

                break;
                
            case 2:
             
                // General info abt the game?

                cout << R"(
        ____  ____   _____  ____  ____   ____  __    __   ____  ____  
        l    j|    \ |     |l    j|    \ l    j|  T__T  T /    T|    \ 
         |  T |  _  Y|   __j |  T |  _  Y |  T |  |  |  |Y  o  ||  D  )
         |  | |  |  ||  l_   |  | |  |  | |  | |  |  |  ||     ||    / 
         |  | |  |  ||   _]  |  | |  |  | |  | l  `  '  !|  _  ||    \ 
         j  l |  |  ||  T    j  l |  |  | j  l  \      / |  |  ||  .  Y
        |____jl__j__jl__j   |____jl__j__j|____j  \_/\_/  l__j__jl__j\_j
                                                               
        )";
            cout << "Version: 0.1\n";
            cout << "By Gauchey\n";
                break;
            case 3:
                cout << "Exiting";
                fflush(stdout);
                for (int i = 0; i < 3; i++) {
                    std::this_thread::sleep_for(std::chrono::milliseconds(550));
                    cout << ".";
                    fflush(stdout);
                }
                cout << "\n";
                return 0;
        }
    }


}