#include <iostream>
#include "tinyxml2.h"
#include "Header.h"

using namespace tinyxml2;

int checkConnection() {
    XMLDocument doc;
    doc.LoadFile("XMLFile.xml");

    if (doc.Error()) {
        std::cout << "Error loading the XML file." << std::endl;
        return 1;
    }

    XMLElement* root = doc.FirstChildElement("RootElement");
    if (root) {
        const char* text = root->GetText();
        if (text) {
            std::cout << "Content of RootElement: " << text << std::endl;
        }
    }

    return 0;
}