#include "character.hpp"
#include "game.hpp"

int main(){

    Game game;

    game.addCharacterAli();
    game.addCharacterReza();

    game.displayCharacter();

    std::string name;
    double health;
    int power;
    Skill skill;

    while(true){

        std::string command;
        std::cout << "\n enter command : ";
        std::cin >> command;

        if(command == "add"){

            std::cin >> name;
            std::cin >> health;
            std::cin >> power;

            if(health > 100 || health < 0){

                health = (health > 100 || health < 0) ? 100 : 0;

            }

            if(power > 20 || power < 0){

                power = (power > 20 || power < 0) ? 20 : 0;

            }

            game.addCharacter(name , health , power , skill);

        }
        else if(command == "displayCharacter"){

            game.displayCharacter();

        }
        else if(command == "end"){

            std::cout << "Bye... \n";
            break;

        }
        else{

            std::cout << "comand not found...\n";

        }

    }

    return 0;

}