#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

struct Skill{

    std::string SkillName;
    int SkillLevel;

};

class Character{

    public :

        std::string Name;
        double Health;
        int Power;
        Skill Title;
        
        Character(const std::string name , double health , int power , Skill title);
        void display()const; 
        bool exist(const Character& other)const;

};

#endif