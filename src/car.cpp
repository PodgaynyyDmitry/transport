#include "../include/car.h"

string Car::getTypeName() const {
    return "автомобиль";
}

int Car::getWheelCount() const {
    return 4;
}

int Car::getMaxSpeed() const {
    return 150;
}

int Car::getPassengerCount() const {
    return 4;
}

string Car::getFuelType() const {
    return "бензин";
}

int Car::getEcologyClass() const {
    return 1;
}

void Car::printUniqueInfo() const {
    cout << "Кол-во мест для пассажиров: " << getPassengerCount() << endl;
    cout << "Тип топлива: " << getFuelType() << endl;
    cout << "Экологический класс: " << getEcologyClass()  << endl;
}
