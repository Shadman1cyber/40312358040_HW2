#include "character.hpp"

Character::Character(const std::string name , double health , int power , Skill title){

    this->Name = name;
    this->Health = health;
    this->Power = power;
    this->Title = title;

};

void Character::display()const{

    std::cout << "name : " << Name << "\n";
    std::cout << "health : " << Health << "\n";
    std::cout << "power : " << Power << "\n";
    std::cout << "skill name : " << Title.SkillName << "\n";
    std::cout << "skill level : " << Title.SkillLevel << "\n";

}

bool Character::exist(const Character& other)const{

    return (Name == other.Name);

};