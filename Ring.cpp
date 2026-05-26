/*************************************************
* ADS Praktikum 1.1
* Ring.cpp
* Erweiterung um Hilfsfunktionen gestattet.
*************************************************/
// Ring .cpp
#include "Ring.h"
#include <iostream>

// Ihr Code hier:
Ring::Ring() {

	//anker = new RingNode;
	m_anker = nullptr;
	m_countNodes = 0;
}

void Ring::addNewNode(std::string desc, std::string data) {

  RingNode* new_node = new RingNode(0,desc,data);

  if (m_anker == nullptr) {     //Leere Ring

    m_anker = new_node;
    new_node->setNext(new_node);
    m_countNodes++;

  }
  else{

    RingNode* tmp = m_anker;
    tmp->setOldAge(tmp->getOldAge() + 1);          // Alte erster Node um 1 erhöhen
    
    while (tmp->getNext() != m_anker) {            // Alte aller anderen um 1 erhöhen         
      tmp = tmp->getNext();
      tmp->setOldAge(tmp->getOldAge() + 1);  
    }
              
    tmp = m_anker->getNext();         // tmp auf letzte node zur Prüfung, ob Alte gleich 6.
    RingNode* tmp2 = m_anker;         // tmp2 für Anfang der Ring 
    if (tmp->getOldAge() == 6) {
      new_node->setNext(tmp->getNext());
      tmp2->setNext(new_node);
      m_anker = new_node;
      delete tmp;
      if (new_node->getNext() == new_node) {
        new_node->setNext(nullptr);
      }
    }
    else {
      new_node->setNext(tmp);
      tmp2->setNext(new_node);
      m_anker = new_node;
      m_countNodes++;
      if (new_node->getNext() == new_node) {
        new_node->setNext(nullptr);
      }
    }
  }
}


bool Ring::search(std::string data) {
	if (m_anker == nullptr) {        //Leere ring
		std::cout << "Leere Ring" << std::endl;
		return false;
	}
	else {
		
		RingNode* tmp = m_anker;
		int gefunden=0;
		do
		{
			if (tmp->getSymbolicData() == data) {                          // ist es der neueste ??
			std::cout << "+ Gefunden in Backup: Alter: " << tmp->getOldAge()
				<< ", Beschreibung: " << tmp->getDescription()
				<< ", Daten: " << tmp->getSymbolicData() << std::endl;
			gefunden++;
		}
		tmp=tmp->getNext();
		} while  ( tmp!=m_anker);
		if (gefunden>=1)
		{
			return true;
		}
		else {
			std::cout << "+ Datensatz konnte nicht gefunden werden." << std::endl;
		return false;
      
		}
	}
		
		
		
		

		/*while (tmp->getNext() != m_anker) {
			tmp = tmp->getNext();
			if (tmp->getSymbolicData() == data) {
				std::cout << "+ Gefunden in Backup: Alter: " << tmp->getOldAge()
					<< ", Beschreibung: " << tmp->getDescription()
					<< ", Daten: " << tmp->getSymbolicData() << std::endl;
				return true;                 
			}
			
		}
		std::cout << "+ Datensatz konnte nicht gefunden werden." << std::endl;
		return false;
	}*/
}


void Ring::print() {
	if (m_anker == nullptr) {        //leere ring
		std::cout << "Leer Ring";
	}
	else {
		RingNode* tmp = m_anker;

		std::cout << "Alter: " << tmp->getOldAge()                    // neueste node ausgeben
			<< ", Beschreibung: " << tmp->getDescription()
			<< ", Daten: " << tmp->getSymbolicData() << std::endl;
		tmp = tmp->getNext();
		for (int counter = 1; counter < m_countNodes; counter++) {

			for (int i = 0; i < 20; i++) {   // horizontal lines
				std::cout << "-";
			}
			while (true) {
				if (tmp->getOldAge() == counter) {
					std::cout << std::endl;
					std::cout << "Alter: " << tmp->getOldAge()
						<< ", Beschreibung: " << tmp->getDescription()
						<< ", Daten: " << tmp->getSymbolicData() << std::endl;
					break;
				}
				tmp = tmp->getNext();
			}
		}
	}
};

//
////////////////////////////////////