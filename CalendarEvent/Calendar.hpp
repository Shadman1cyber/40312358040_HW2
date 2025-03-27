#ifndef CALENDAR_HPP
#define CALENDAR_HPP

#include "Event.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

class Calendar {

    public :
        ~Calendar();
        void addEvent(const std::string& name , time_t start , time_t end);
        void refresh();
        void displayEvents() const;

    private :
        std::vector<Event*> events;

};

#endif