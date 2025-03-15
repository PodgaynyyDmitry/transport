#ifndef TRANSPORTFACTORY_H
#define TRANSPORTFACTORY_H

#include <memory>
#include "transport.h"

using namespace std;

class TransportFactory {
public:
    static unique_ptr<Transport> createTransport(int typeCode);
};

#endif // TRANSPORTFACTORY_H
