//
//  main.cpp
//  Bulls_and_cows
//
//  Created by john van schultz on 6/19/17.
//  Copyright © 2017 john van schultz. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    // Use constants for variables that do not change
    constexpr int WORD_LENGTH = 9;
    cout << "Welcome to Bulls and Cows" << endl;
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram im thinking of" << endl;
    return 0;
}
