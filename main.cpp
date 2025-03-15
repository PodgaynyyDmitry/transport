#include <iostream>
#include <string>
#include <windows.h>
#include "include/transportfactory.h"

int main(int argc, char* argv[]) {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    if (argc == 1) {
        cout << "Запустите приложение с параметрами...";
        return 0;
    }

    for (int i = 1; i < argc; ++i) {
        try {
            int typeCode = stoi(argv[i]);
            auto transport = TransportFactory::createTransport(typeCode);
            if (!transport) {
                cout << "НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА" << endl;
            } else {
                transport->printInfo();
            }
        } catch (...) {
            cout << "НЕИЗВЕСТНЫЙ ТИП ТРАНСПОРТА" << endl;
        }
    }

    return 0;
}
