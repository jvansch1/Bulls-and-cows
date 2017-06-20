//
//  FBullCowGame.cpp
//  Bulls_and_cows
//
//  Created by john van schultz on 6/20/17.
//  Copyright © 2017 john van schultz. All rights reserved.
//

#include "FBullCowGame.hpp"

void FBullCowGame::reset() {
    my_current_try = 1;
    return;
}

int FBullCowGame::get_max_tries() const {
    return my_max_tries;
}

int FBullCowGame::get_current_try() const {
    return my_current_try;
}

void FBullCowGame::iterate_try() {
    my_current_try++;
}
