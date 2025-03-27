#ifndef PATIENT_HPP
#define PATIENT_HPP

#include <iostream>

class Patient {

    private:

        double body_temperature;
        int heart_rate;
        int respiratory_rate;
        int blood_pressure;

    public:

        Patient(double bodyTemp, int heartRate, int respiratoryRate, int bloodPressure);
        ~Patient();
        void displayVitalSigns() const;
        
};

#endif
