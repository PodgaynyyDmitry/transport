#include "../include/transport.h"

void Transport::printInfo() const {
    cout << "Тип транспорта: " << getTypeName() << "\n"
              << "Кол-во колес: " << getWheelCount() << "\n"
              << "Максимальная скорость: " << getMaxSpeed() << " км/ч\n";

    printUniqueInfo();

    cout << endl;
}
