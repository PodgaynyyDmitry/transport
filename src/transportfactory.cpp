#include "../include/TransportFactory.h"
#include "../include/Motorcycle.h"
#include "../include/Scooter.h"
#include "../include/Car.h"
#include "../include/Bus.h"

unique_ptr<Transport> TransportFactory::createTransport(int typeCode) {
    switch (typeCode) {
    case 0: return make_unique<Motorcycle>();
    case 1: return make_unique<Scooter>();
    case 2: return make_unique<Car>();
    case 3: return make_unique<Bus>();
    default:
        return nullptr;
    }
}
