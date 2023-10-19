#include <iostream>
#include "tinyxml2.h"
#include "Header.h"
using namespace std;

using namespace tinyxml2;

int checkConnection() {
    XMLDocument doc;
    const char* path = "BankRecords.xml";
    if (doc.LoadFile(path) == XML_SUCCESS) {
        cout << "XML file loaded successfully" << endl;
        return 1;
    }
    cout << "file loading error" << endl;
    return 0;
}