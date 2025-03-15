#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "transport.h"

using namespace std;

class Motorcycle : public Transport {
public:
    string getTypeName() const override;
    int getWheelCount() const override;
    int getMaxSpeed() const override;
    int getPassengerCount() const;
    string getEngineType() const;

    void printUniqueInfo() const override;
};

#endif // MOTORCYCLE_H
