#include <iostream>
#include "gps.hpp"

gps::gps(int latitude, int longitude){

    if (latitude >= -90 && latitude <= 90){

        Latitude = latitude;
        
    }
    if (longitude >= -180 && longitude <= 180){

        Longitude = longitude;
        
    }

}

gps::~gps(){

    std::cout << "last location: \n" << "latitude:" << Latitude << "\n" << "longitude:" << Longitude; 
    
}

double gps::get_latitude() const{

    return Latitude;
    
}

double gps::get_longitude() const{

    return Longitude;
    
}