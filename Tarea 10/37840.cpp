
#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;


int main() {
	int pos = 49;
	int conteo = 0;

	srand(time(NULL));
	for (int i = 0; i<100; i++) {
		system("cls");
		int r = rand() % 2;
		if (r == 0) {
			pos = pos - 3;
		}
		else {
			pos = pos + 3;
		}

		if (pos < 0) {
			pos = 99;
		}
		if (pos > 99) {
			pos = 0;
		}

		for (int j = 0; j<100; j++) {
			if (j == pos) {
				cout << "A";
			}
			else {
				cout << "*";
			}
		}
		
		if(pos == 49) {
			conteo++;

		}

		Sleep(50); // Duerme 50 milisegundos el programa
	}
    
	cout << endl;
	cout << "Numero de veces que ha pasado por la posicion inicial: " << conteo << endl;

	system("pause > nul");

	return 0;
}
