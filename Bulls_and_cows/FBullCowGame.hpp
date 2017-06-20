//
//  FBullCowGame.hpp
//  Bulls_and_cows
//
//  Created by john van schultz on 6/20/17.
//  Copyright © 2017 john van schultz. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>

class FBullCowGame {
public:
    void reset(); // Todo make a more rich return value
    int get_max_tries();
    int get_current_try();
    bool is_game_won();
    bool is_guess_valid(std::string);
    
private:
    int my_current_try;
    int my_max_tries = 10;
};

#endif /* FBullCowGame_hpp */
