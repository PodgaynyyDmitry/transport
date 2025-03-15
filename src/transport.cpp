#include "../include/transport.h"

void Transport::printInfo() const {
    cout << "Тип транспорта: " << getTypeName() << endl;
    cout << "Кол-во колес: " << getWheelCount() << endl;
    cout << "Максимальная скорость: " << getMaxSpeed() << " км/ч" << endl;

    printUniqueInfo();

    cout << endl;
}
