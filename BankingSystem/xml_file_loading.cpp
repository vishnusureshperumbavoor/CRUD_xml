#include <iostream>
#include "tinyxml2.h"
#include "string"
using namespace std;
using namespace tinyxml2;

bool connectionCheck() {
    XMLDocument doc;
    doc.LoadFile("XMLFile.xml");

    if (doc.Error()) {
        cout << "Error loading the XML file.";
        return false;
    }

    XMLElement* root = doc.FirstChildElement("RootElement");
    if (root) {
        const char* text = root->GetText();
        if (text) {
            cout << "Content of RootElement: " << text;
            return true;
        }
    }
    return true;
}
