#include "Calendar.hpp"
#include "Event.hpp"
#include <iostream>
#include <ctime> 

Calendar::~Calendar(){

    for(Event* event : events){

        delete event;

    }
    events.clear();

}

void Calendar::addEvent(const std::string& Name, time_t Start, time_t End){

    Event* newEvent = new Event(Name, Start, End);
    for (Event* event : events){

        if (event->interrupt(*newEvent)){

            std::cout << "Event " << Name << " conflicts with an existing event.\n";
            delete newEvent;
            return;
        }

    }

    events.push_back(newEvent);
    std::cout << "Event " << Name << " added successfully.\n";

}

void Calendar::refresh(){

    time_t currentTime = time(0);
    for (auto it = events.begin(); it != events.end();){

        if ((*it)->End < currentTime){

            std::cout << "Event has been expired, deleting...\n";
            delete *it;
            it = events.erase(it);
        
        }

        else{

            ++it;

        }

    }

}

void Calendar::displayEvents() const{

    if (events.empty()){

        std::cout << "No events to display.\n";
        return;

    }

    for (const Event* event : events){

        event->display();

    }

}