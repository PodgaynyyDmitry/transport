#ifndef BUS_H
#define BUS_H

#include "transport.h"

using namespace std;

class Bus : public Transport {
public:
    string getTypeName() const override;
    int getWheelCount() const override;
    int getMaxSpeed() const override;

    int getPassengerCount() const;
    string getFuelType() const;

    void printUniqueInfo() const override;
};

#endif // BUS_H
