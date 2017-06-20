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
void play_game();


int main() {
    
    print_intro();
    play_game();
    
    return 0;
}

void play_game() {
    constexpr int GAME_LENGTH = 5;
    for (int i = 0; i < GAME_LENGTH; i++) {
        string result = get_guess();
        repeat_guess(result);
        cout << endl;
    }
}

void print_intro() {
    constexpr int WORD_LENGTH = 5;
    cout << "Welcome to Bulls and Cows\n";
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram im thinking of\n";
    cout << endl;
    return;
}

string get_guess() {
    string player_input = "";
    cout << "Please enter your guess: ";
    getline(cin, player_input);
    return player_input;
}

void repeat_guess(string guess) {
    cout << "You guessed: " << guess << endl;
    return;
}


