#include <iostream>
#include "tinyxml2.h"
#include <iomanip>
#include "Header.h"
using namespace tinyxml2;
using namespace std;

int main() {
    if (checkConnection) {
        readXML();
    }
    else {
        cout << "connection failed" << endl;
    }
    
}