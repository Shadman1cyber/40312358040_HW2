#include "patient.hpp"

Patient::Patient(double bodyTemp, int heartRate, int respiratoryRate, int bloodPressure) {

    if (bodyTemp >= 36.0 && bodyTemp <= 37.5) {
        body_temperature = bodyTemp;
    } else {
        std::cout << "body temperature Must be between 36.0 and 37.5°C.\n";
        body_temperature = 36.5;
    }

    if (heartRate >= 60 && heartRate <= 100) {
        heart_rate = heartRate;
    } else {
        std::cout << "heart rate Must be between 60 and 100 bpm.\n";
        heart_rate = 75;
    }

    if (respiratoryRate >= 16 && respiratoryRate <= 20) {
        respiratory_rate = respiratoryRate;
    } else {
        std::cout << "respiratory rate Must be between 16 and 20 breaths per minute.\n";
        respiratory_rate = 18; 
    }

    if (bloodPressure >= 80 && bloodPressure <= 120) {
        blood_pressure = bloodPressure;
    } else {
        std::cout << "blood pressure Must be between 80 and 120.\n";
        blood_pressure = 100;
    }
}

Patient::~Patient() {

    body_temperature += 10;
    heart_rate += 10;
    respiratory_rate += 10;
    blood_pressure += 10;

    std::cout << "Patient's datas are encrypted and destroyed.\n";

}

void Patient::displayVitalSigns() const {

    std::cout << "Body Temperature: " << body_temperature << "°C\n";
    std::cout << "Heart Rate: " << heart_rate << " bpm\n";
    std::cout << "Respiratory Rate: " << respiratory_rate << " bpm\n";
    std::cout << "Blood Pressure: " << blood_pressure << "\n";

}