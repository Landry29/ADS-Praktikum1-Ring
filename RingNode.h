/*************************************************
* ADS Praktikum 1.1
* RingNode.h
* Erweiterung um Hilfsfunktionen gestattet.
*************************************************/
#pragma once
#include <string>

class RingNode{
	
private:
	// Ihr Code hier:

    int oldAge;
	std::string description;
	std::string symbolicData;
	RingNode* next= nullptr;

	//	
public:
	// Ihr Code hier:

    RingNode(){}
	RingNode(int age, std::string desc, std::string sym);
	~RingNode() {}

	int getOldAge()const { return oldAge; }
	void setOldAge(int age) { oldAge = age; }
	std::string getDescription()const { return description; }
	void setDescription(std::string desc) { description = desc; }
	std::string getSymbolicData()const { return symbolicData; }
	void setSymbolicData(std::string data) { symbolicData = data; }
	RingNode* getNext() const{ return next; }
	void setNext(RingNode* naechste) { next = naechste; }

	//
};