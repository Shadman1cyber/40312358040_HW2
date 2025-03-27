#include "hospital.hpp"

void Hospital::addPatient(const Patient& patient) {

    patients.push_back(patient);

}

void Hospital::displayPatients() const {

    std::cout << "Patient's list : \n";
    for (const auto& patient : patients) {

        patient.displayVitalSigns();
        std::cout << "\n";

    }

}