#include "../include/scooter.h"

string Scooter::getTypeName() const {
    return "самокат";
}

int Scooter::getWheelCount() const {
    return 2;
}

int Scooter::getMaxSpeed() const {
    return 20;
}
