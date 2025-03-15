#ifndef CAR_H
#define CAR_H

#include "transport.h"

using namespace std;

class Car : public Transport {
public:
    string getTypeName() const override;
    int getWheelCount() const override;
    int getMaxSpeed() const override;
    int getPassengerCount() const ;
    string getFuelType() const;
    int getEcologyClass() const;

    void printUniqueInfo() const override;
};

#endif // CAR_H
