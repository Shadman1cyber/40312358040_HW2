#include "Event.hpp"
#include <iostream>
#include <string>
#include <ctime>

Event::Event(const std::string name , time_t start , time_t end){

    this->Name = name;
    this->Start = start;
    this->End = end;

};

Event::~Event(){

    std::cout << "Event " << Name << " has been deleted!";

}

bool Event::interrupt(const Event& other)const {

    return !(End <= other.Start || Start >= other.End);

}

void Event::display()const {

    std::cout << "name : " << Name << "\n";
    std::cout << "start time : " << ctime(&Start) << "\n";
    std::cout << "end time : " << ctime(&End) << "\n";

}