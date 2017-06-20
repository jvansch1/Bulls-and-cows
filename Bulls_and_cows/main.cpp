//
//  main.cpp
//  Bulls_and_cows
//
//  Created by john van schultz on 6/19/17.
//  Copyright © 2017 john van schultz. All rights reserved.
//

#include <iostream>

// include string
#include <string>


using namespace std;

int main() {
    // introduce the game
    
    // Use constants for variables that do not change
    
    constexpr int WORD_LENGTH = 9;
    cout << "Welcome to Bulls and Cows\n";
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram im thinking of\n";
    
    // get a guess from the player
    
    string player_input = "";
    cout << "Please enter your guess: ";
    cin >> player_input;
    
    // repeat guess
    
    cout << "You guessed: " << player_input << endl;

    return 0;
}
