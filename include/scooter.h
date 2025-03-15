#ifndef SCOOTER_H
#define SCOOTER_H

#include "transport.h"

using namespace std;

class Scooter : public Transport {

public:
    string getTypeName() const override;
    int getWheelCount() const override;
    int getMaxSpeed() const override;
};

#endif // SCOOTER_H
