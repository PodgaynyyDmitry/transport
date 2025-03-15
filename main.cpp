#include <iostream>
#include <string>

#ifdef _WIN32
    #include <windows.h>
#endif

#include "include/transportfactory.h"

int main(int argc, char* argv[]) {
#ifdef _WIN32
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
#endif

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
