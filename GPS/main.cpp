#include<iostream>
#include"gps.hpp"

using namespace std;
int main()
{
    int lat, lon;
    cout << "enter your location(first your lat and then your lon): \n";
    cin >> lat >> lon;
        if (lat >= -90 && lat <= 90 && lon >= -180 && lon <= 180)
        {
            lat = lon;
            gps object(lat, lon);
            object.get_latitude();
            object.get_longitude();
        }
        else
        {
            std::cout << "invalid input!" << "\n";
        }
    gps object(lat, lon);
    object.get_latitude();
    object.get_longitude();
    return 0;
}