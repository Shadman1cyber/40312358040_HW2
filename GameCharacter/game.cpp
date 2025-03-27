#include "character.hpp"
#include "game.hpp"

void Game::addCharacterAli(){

    std::string name1 = "ali";
    double health1 = 100;
    int power1 = 20;
    Skill skill1;
    skill1.SkillName = "fight";
    skill1.SkillLevel = 100;
    Character* newCharacter = new Character(name1 , health1 , power1 , skill1);
    characters.push_back(newCharacter);
    std::cout << "Character " << name1 << " has been added successfully!\n";

 

}

void Game::addCharacterReza(){

    std::string name1 = "Reza";
    double health1 = 69;
    int power1 = 6;
    Skill skill1;
    skill1.SkillName = "drive";
    skill1.SkillLevel = 1;
    Character* newCharacter = new Character(name1 , health1 , power1 , skill1);
    characters.push_back(newCharacter);
    std::cout << "Character " << name1 << " has been added successfully!\n";

 

}


void Game::addCharacter(const std::string name , double health , int power , Skill title){

    std::cout << "enter your character skill : ";
    std::cin >> title.SkillName;
    std::cout << "enter your character level : ";
    std::cin >> title.SkillLevel;

    if(title.SkillLevel > 100 || title.SkillLevel < 0){

        title.SkillLevel = (title.SkillLevel > 100 || title.SkillLevel < 0) ? 100 : 0;

    }

    Character* newCharacter = new Character(name , health , power , title);
    for (Character* character : characters){

        if(character->exist(*newCharacter)){

            std::cout << "Character " << name << " already exist!\n";
            delete newCharacter;
            return;

        }

    }
    characters.push_back(newCharacter);
    std::cout << "Character " << name << " has been added successfully!\n";

};

void Game::displayCharacter()const{

    if(characters.empty()){

        std::cout << "No characters to display.\n";
        return;

    }

    for(const Character* character : characters){

        character->display();

    }

};  