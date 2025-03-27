#include <iostream>
#include "patient.hpp"
#include "hospital.hpp"

int main() {

    Patient patient1(37.3, 73, 20, 109);
    Patient patient2(37.2, 80, 19, 110);
    Patient patient3(37.1, 70, 16, 104);

    Hospital hospital;

    hospital.addPatient(patient1);
    hospital.addPatient(patient2);
    hospital.addPatient(patient3);

    hospital.displayPatients();

    double bodyTemp;
    int heartRate;
    int respiratoryRate;
    int bloodPressure;

    while(true){

        std::string command;
        std::cout << "enter your command : ";
        std::cin >> command;

        if(command == "add"){

            std::cin >> bodyTemp;
            std::cin >> heartRate;
            std::cin >> respiratoryRate;
            std::cin >> bloodPressure;
            Patient patient(bodyTemp , heartRate , respiratoryRate , bloodPressure);
            hospital.addPatient(patient);

        }
        else if(command == "display"){

            hospital.displayPatients();

        }
        else if(command == "end"){

            std::cout << "Bye...\n";
            break;

        }
        else{

            std::cout << "invalid command!\n";

        }

    }

    return 0;

}
