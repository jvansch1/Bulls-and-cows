#include <iostream>
#include <string>

using namespace std;

// must prototype functions if they appear below main
void print_intro();
string get_guess();
void repeat_guess(string guess);
void play_game();
bool ask_to_play_again();

int main() {
    
    bool play_again = false;
    
    print_intro();
    do {
        play_game();
        play_again = ask_to_play_again();
    } while (play_again);
    
    cout << "\nThanks for playing!";
    
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

bool ask_to_play_again() {
    string reply;
    cout << "Do you want to play again?(y for yes, n for no) \n";
    getline(cin, reply);
    
    if (reply[0] == 'y' || reply[0] == 'Y') {
        return true;
    } else {
        return false;
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


