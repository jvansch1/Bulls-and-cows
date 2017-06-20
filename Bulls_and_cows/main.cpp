#include <iostream>
#include <string>
#include "FBullCowGame.hpp"



// must prototype functions if they appear below main
void print_intro();
std::string get_guess();
void repeat_guess(std::string guess);
void play_game();
bool ask_to_play_again();

FBullCowGame BCGame; // instantiate game class

int main() {
    
    bool play_again = false;
    
    print_intro();
    do {
        play_game();
        play_again = ask_to_play_again();
    } while (play_again);
    
    std::cout << "\nThanks for playing!";
    
    return 0;
}

void play_game() {
    int max_tries = BCGame.get_max_tries();
    std::cout << max_tries;
    for (int i = 0; i < max_tries; i++) {
        std::string result = get_guess();
        repeat_guess(result);
        std::cout << std::endl;
    }
}

bool ask_to_play_again() {
    std::string reply;
    std::cout << "Do you want to play again?(y for yes, n for no) \n";
    std::getline(std::cin, reply);
    
    if (reply[0] == 'y' || reply[0] == 'Y') {
        return true;
    } else {
        return false;
    }
}

void print_intro() {
    constexpr int WORD_LENGTH = 5;
    std::cout << "Welcome to Bulls and Cows\n";
    std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram im thinking of\n";
    std::cout << std::endl;
    return;
}

std::string get_guess() {
    std::string player_input = "";
    std::cout << "Please enter your guess: ";
    std::getline(std::cin, player_input);
    return player_input;
}

void repeat_guess(std::string guess) {
    std::cout << "You guessed: " << guess << std::endl;
    return;
}


