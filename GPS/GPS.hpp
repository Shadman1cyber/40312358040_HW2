#ifndef GPS_HPP
#define GPS_HPP
 class gps{

   private :

      double Latitude;
      double Longitude;
       
   public:

      gps(int latitude, int longitude);
      ~gps();
      double get_latitude() const;
      double get_longitude() const;

 };
#endif