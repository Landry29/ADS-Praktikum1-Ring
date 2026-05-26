/*************************************************
* ADS Praktikum 1.1
* main.cpp
* 
*************************************************/
#define CATCH_CONFIG_RUNNER

#include <iostream>
#include <string>
#include "Ring.h"
#include "catch.h"

using namespace std;

void print_menu()
{
    cout << "====================================" << endl
        << " SuperBackUp-Organizer over 9000, by. Son Goku" << endl
        << "====================================" << endl
        << "1) Backup anlegen" << endl
        << "2) Backup suchen" << endl
        << "3) Alle Backups ausgeben" << endl
		 << "4) Programm beenden" << endl
        << "?> ";
}

int main()
{
	int result = Catch::Session().run();
	// Ihr Code hier:
    Ring My_ring;
	int kommando = 0;
         do {
         print_menu();
        cin >> kommando;
        string beschreibung = "";
		string daten = "";

		switch (kommando) {
		case 1:
			cout << "+Neuen Datensatz anlegen" << endl;
			cout << "Beschreibung ?> "; cin >> beschreibung;

			cout << "Daten ?> "; cin >> daten;
			My_ring.addNewNode(beschreibung, daten);
			cout << "+ Ihr Datensatz wurde hinzugefuegt. " << endl;
			break;
		case 2:
			cout << "+Nach welchen Daten soll gesucht werden ? " << endl;
			cout << "?> "; cin >> daten;
			My_ring.search(daten);
			break;
		case 3:
			My_ring.print();
			break;
		case 4:
			cout << "Programm wird beendet." << endl;
			break;
		default:
			cout << "einschließlich nur von 0 bis 4" << endl;
		}
		cout<< endl;
         }while (kommando!=4);   // endet wenn man auf 4 druckt 

	//
	///////////////////////////////////////
	system("Pause");
	return result;
}