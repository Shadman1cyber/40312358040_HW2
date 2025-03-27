#ifndef GAME_HPP
#define GAME_HPP

#include "character.hpp"
#include <vector>

class Game{

    public :

        void addCharacter(const std::string name , double health , int power , Skill title);
        void addCharacterAli();
        void addCharacterReza();
        void displayCharacter()const;   

    private :

        std::vector<Character*> characters;

};

#endif