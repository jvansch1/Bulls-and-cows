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

// must prototype functions if they appear below main
void print_intro();
string get_guess();
void repeat_guess(string guess);


int main() {
    
    constexpr int GAME_LENGTH = 9;
    print_intro();
    for (int i = 0; i < GAME_LENGTH; i++) {
        string result = get_guess();
        repeat_guess(result);
        cout << endl;
    }
    return 0;
}

void print_intro() {
    // introduce the game
    // Use constants for variables that do not change
    constexpr int WORD_LENGTH = 9;
    
    cout << "Welcome to Bulls and Cows\n";
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram im thinking of\n";
    cout << endl;
    return;
}

string get_guess() {
    // get a guess from the player
    
    string player_input = "";
    cout << "Please enter your guess: ";
    getline(cin, player_input);
    return player_input;
}

void repeat_guess(string guess) {
    cout << "You guessed: " << guess << endl;
    return;
}


