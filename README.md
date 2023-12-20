#include"utilis.h"
#include<math.h>
const double PI = 3.14;
//to convert it into degree to radians
double degreestoradians(double degree) {
    radians==( degrees * 3.14/180 );
}
double getAirdistance(double originLatitude, double originlongitude, double destinationLatitude, double destinationLongitude) {
    double R = 6371;
    originLatitude = degreeToRadians(originLatitude);
    originlongitude = degreesToRadians(originLongitude);
    destinationLatitude = degreestoRadians(destinationLatitude);
    destinationLongitude = degreestoRadians(destinationLongitude);
    //now implement the sepherical law of cosines
    double delta = destinationlongitude - originlongitude;
    double distance = acos(sin(originLatitude) * sin(destinationLatitude) + cos(originLatitude) * cos(destinationLatitude) * cos(delta))* r;
    return distance;
}


