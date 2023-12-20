#include <stdio.h>
#include "utils.h"
int main(){
    printf("degreesToRADIANS(180) = %f\n", degreestoRadians(180));
    printf("getAirDistance(36.12, 33.94, -118.40)=%f\n",getAirDistance(36.12,86.67,33.94,-118.40));
    printf("lorentzTimeDilation(1,0.25) = %f\n", lorentztimedilation(1,0.25));
    return 0;
}

