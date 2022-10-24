#include<iostream>
using std::cout;
using std::endl;
using std::cin;

#include"IElectroncs.h"
#include"Display.h"
#include"Player.h"
#include"Notepad.h"
#include"Phone.h"
#include"VacuumCleaner.h"
#include "WashingMachine.h"

int main() {
	setlocale(LC_ALL, "");
	
    const int size = 6;
	IElectroncs* eShop[size];
	
	eShop[0] = new Display();
    eShop[1] = new Player(10, 50, 500, "Sony");
    eShop[2] = new Notepad(100, 1440, 2560, 450);
    eShop[3] = new Phone(1080, 1920, 350, 100, "IPhone", "Green");
    eShop[4] = new VacuumCleaner(4500, 2600, "Karcher");
    eShop[5] = new WashingMachine(1500, 25000, "Miele");

    bool open = true;

    while (open)
    {
        cout << "Выберите продукт : 1 - Дисплей, 2 - Плеер, 3 - Планшет, 4 - Телефон, 5 - Пылесос, 6 - Стиральная машина, 0 чтобы выйти" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            eShop[0]->showSpec();
            break;

        case 2:
            eShop[1]->showSpec();
            break;

        case 3:
            eShop[2]->showSpec();
            break;

        case 4:
            eShop[3]->showSpec();
            break;

        case 5:
            eShop[4]->showSpec();
            break;

        case 6:
            eShop[5]->showSpec();
            break;
        case 0:
            open = false;
            break;

        default:
            cout << "Выберите устройство от 1 до 5 или 0, чтобы выйти" << endl;
            break;
        }
    }

	for (int i = 0; i < size; i++) {
		delete eShop[i];
	}
	

	return 0;
}