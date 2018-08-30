#include <iostream>
#include <time.h>
using namespace std;

void rockpaperscissors();
int choice;
int oponente;

void main() {
	rockpaperscissors();
}

void rockpaperscissors(){
	system("cls");

	cout << "Piedra, Papel o Tijera" << endl;
	cout << "1. Piedra" << endl;
	cout << "2. Papel" << endl;
	cout << "3. Tijera" << endl;

	cin >> choice;

	cout << endl;
	cout << "Elegiste: ";

	if (choice == 1) {
		cout << "Piedra" << endl;
	}
	else if (choice == 2){
		cout << "Papel" << endl;
	}
	else {
		cout << "Tijera" << endl;
	}

	srand(time(NULL));
	oponente = rand() % 3 + 1;

	if (choice == 1 && oponente == 1) {
		cout << "Piedra vs Piedra" << endl;
		cout << "Empate!" << endl;
	}
	else if (choice == 1 && oponente == 2) {
		cout << "Piedra vs Papel" << endl;
		cout << "Papel cubre piedra" << endl;
		cout << "Perdedor!" << endl;
	}
	else if (choice == 1 && oponente == 3) {
		cout << "Piedra vs Tijera" << endl;
		cout << "Piedra rompe tijera" << endl;
		cout << "Ganador!" << endl;
	}

	if (choice == 2 && oponente == 1) {
		cout << "Papel vs Piedra" << endl;
		cout << "Papel cubre piedra" << endl;
		cout << "Ganador!" << endl;
	}
	else if (choice == 2 && oponente == 2) {
		cout << "Papel vs Papel" << endl;
		cout << "Empate!" << endl;
	}
	else if (choice == 2 && oponente == 3) {
		cout << "Papel vs Tijera" << endl;
		cout << "Tijera corta papel" << endl;
		cout << "Perdedor" << endl;
	}

	if (choice == 3 && oponente == 1) {
		cout << "Tijera vs Piedra" << endl;
		cout << "Piedra rompe tijera" << endl;
		cout << "Perdedor!" << endl;
	}
	else if (choice == 3 && oponente == 2) {
		cout << "Tijera vs Papel" << endl;
		cout << "Tijera corta papel" << endl;
		cout << "Ganador!" << endl;
	}
	else if (choice == 3 && oponente == 3) {
		cout << "Tijera vs Tijera" << endl;
		cout << "Empate!" << endl;
	}

	cout << endl;
	cout << "Revancha?" << endl;
	cout << "1. Si" << endl;
	cout << "2. No" << endl;

	cin >> choice;

	if (choice == 1) {
		rockpaperscissors();
	}

	system("pause");
}




