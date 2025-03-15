#include "../include/bus.h"
#include <iostream>

string Bus::getTypeName() const {
    return "автобус";
}

int Bus::getWheelCount() const {
    return 6;
}

int Bus::getMaxSpeed() const {
    return 100;
}

int Bus::getPassengerCount() const {
    return 20;
}

string Bus::getFuelType() const {
    return "дизель";
}

void Bus::printUniqueInfo() const {
    cout << "Кол-во мест для пассажиров: " << getPassengerCount() << endl;
    cout << "Тип топлива: " << getFuelType() << endl;
}
