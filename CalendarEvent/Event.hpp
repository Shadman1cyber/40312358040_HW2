#ifndef EVENT_HPP
#define EVENT_HPP

#include <iostream>
#include <string>
#include <ctime>

class Event {

    public :

        std::string Name;
        time_t Start;
        time_t End;

        Event(const std::string name , time_t start , time_t end);
        ~Event();
        bool interrupt(const Event& other)const ;
        void display()const;

};

#endif