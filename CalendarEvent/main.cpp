#include "calendar.hpp"
#include "event.hpp"
#include <iostream>
#include <ctime>
#include <string>

int main(){

    Calendar calendar;

    time_t currentTime = time(0);
    time_t Start1 = currentTime + 3600;
    time_t End1 = Start1 + 1800;
    time_t Start2 = currentTime + 7200;
    time_t End2 = Start2 + 3600;

    calendar.addEvent("StudyingC++", Start1, End1);
    calendar.addEvent("DoctorAppointment", Start2, End2);

    calendar.displayEvents();

    calendar.refresh();

    std::string title;
    time_t Start;
    time_t End;
    
    while(true){

        std::string command;
        std::cout << "\n enter command : ";
        std::cin >> command;

        if (command == "addEvent"){

            std::cin >> title;
            std::cin >> Start;
            std::cin >> End;
            Start =+ currentTime;
            End =+ Start;
            calendar.addEvent(title , Start , End);

        }
        else if (command == "display"){

            calendar.displayEvents();

        }
        else if (command == "refresh"){

            calendar.refresh();

        }
        else if (command == "end"){

            std::cout << "Bye... \n";
            break;

        }
        else{

            std::cout << "comand not found...\n";

        }
    }

    return 0;
}
