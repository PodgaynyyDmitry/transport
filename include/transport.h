#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>
#include <iostream>

using namespace std;

class Transport {
public:
    virtual ~Transport() = default;

    virtual string getTypeName() const = 0;
    virtual int getWheelCount() const = 0;
    virtual int getMaxSpeed() const = 0;


    virtual void printUniqueInfo() const {}

    virtual void printInfo() const ;
};

#endif // TRANSPORT_H
