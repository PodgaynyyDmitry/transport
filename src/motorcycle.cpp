#include "../include/motorcycle.h"

string Motorcycle::getTypeName() const {
    return "мотоцикл";
}

int Motorcycle::getWheelCount() const {
    return 2;
}

int Motorcycle::getMaxSpeed() const {
    return 120;
}

int Motorcycle::getPassengerCount() const {
    return 2;
}

string Motorcycle::getEngineType() const {
    return "2-тактный";
}


void Motorcycle::printUniqueInfo() const {
    cout << "Кол-во мест для пассажиров: " << getPassengerCount() << endl;
    cout << "Тип двигателя: " << getEngineType() << endl;
}
