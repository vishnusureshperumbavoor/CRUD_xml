#include "tinyxml2.h"
#include <iostream>
using namespace tinyxml2;
using namespace std;

int writeXML() {
	XMLDocument doc;
	const char* path = "BankRecords.xml";
	char accountNumberChar[100]{};
	char typeChar[100]{};

	// Load the XML file into the Doc instance
	doc.LoadFile(path);
	//Get root Element
	XMLElement* pTop = doc.RootElement();

	// Get 'Accounts' Child
	XMLElement* pAccounts = pTop -> FirstChildElement("Accounts");

	//Create new Element
	XMLNode* pRoot = doc.NewElement("Account");
	//Insert new Element
	pAccounts -> InsertEndChild(pRoot);

	//Create new Element
	XMLElement* pElement = doc.NewElement("AccountNo");
	// Set new Element Text
	pElement -> SetText("3"); // AccountNo

	// Insert new Element
	pRoot -> InsertEndChild(pElement);

	//Create new Element
	pElement = doc.NewElement("type");
	// Set new Element Text
	pElement -> SetText("checking"); // type

	// Insert new Element
	pRoot -> InsertEndChild(pElement);

	//Create new Element
	pElement = doc.NewElement("customer");
	// Set new element Text
	pElement -> SetText("Craig"); // customer

	// Insert new Element
	pRoot -> InsertEndChild(pElement);

	//Create new Element
	pElement = doc.NewElement("balance");
	// Set new Element Text
	pElement -> SetText("3000"); // balance
	// Insert new Element
	pRoot -> InsertEndChild(pElement);

	//Create new Element
	pElement = doc.NewElement("openDate");
	// Set new Element Text
	pElement -> SetText("06/01/2020"); // openDate

	//Insert new Element
	pRoot -> InsertEndChild(pElement);

	//Save the changes into the XML file
	if (doc.SaveFile(path) == XML_SUCCESS) {
		cout << "Data added to XML file" << endl;
		return 1;
	}
	cout << "Data adding to XML file failed" << endl;
	return 0;
}