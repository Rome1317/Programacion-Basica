#include <iostream>
#include <string.h>
using namespace std;

void menu();
void name();
void tel();
void email();
void matricula();
void grades();
void address();
int choice;

void main() {
	locale::global(locale("spanish"));
	menu();
}

void menu() {
	system("cls");
	cout << "Inicio:" << endl;
	cout << endl;
	
	cout << "Entrar al Menu: " << endl;
	cout << "1. Si" << endl;
	cout << "2. No" << endl;
	cin >> choice;

	if (choice == 1) {
		system("cls");
		cout << "Menu: " << endl;
		cout << endl;

		cout << "Entrar a: " << endl;
		cout << "A. Alumnos " << endl;
		cout << "B. Matriculas" << endl;
		cout << "C. Telefonos" << endl;
		cout << "D. Emails" << endl;
		cout << "E. Calificaciones" << endl;
		cout << "F. Direcciones" << endl;
		cout << "F. Salir del Menu " << endl;

		char op;
		cin >> op;
		if (op > 96) {
			op -= 32;
		}
		switch (op)
		{
		case 'A':
			system("cls");
			cout << "Lista De Alumnos: " << endl;
			cout << endl;

			name();

			break;
		case 'B':
			system("cls");
			cout << "Lista De Matriculas: " << endl;
			cout << endl;

			matricula();

			break;
		case 'C':
			system("cls");
			cout << "Lista De Telefonos: " << endl;
			cout << endl;

			tel();

			break;
		case 'D':
			system("cls");
			cout << "Lista De Emails: " << endl;
			cout << endl;

			email();

			break;
		case 'E':
			system("cls");
			cout << "Lista De Calificaciones: " << endl;
			cout << endl;

			grades();

			break;
		case 'F':
			system("cls");
			cout << "Lista De Direcciones: " << endl;
			cout << endl;

			address();

			break;
		default:
			system("cls");
			cout << "Ha salido del programa." << endl;
			break; 
		}

	}
	else {
		cout << endl;
		cout << "Ha salido del programa." << endl;
	}
	
	system("pause > nul");
}

void name() {
	cout << "Ingresar Apellido:" << endl;
	char ape[20];
	cin >> ape;
	cout << "Ingresar Nombre: " << endl;
	char nom[20];
	cin >> nom;

	cout << endl;
	cout << "Regresar al Menu: " << endl;
	cout << "1. Si " << endl;
	cout << "2. No " << endl;
	cin >> choice;

	if (choice == 1) {
		menu();
	}
	else {
		cout << "Ha salido del programa." << endl;
	}
}

void matricula() {
	cout << "Ingresar Matricula: " << endl;
	int mat;
	cin >> mat;

	cout << endl;
	cout << "Regresar al Menu: " << endl;
	cout << "1. Si " << endl;
	cout << "2. No " << endl;
	cin >> choice;

	if (choice == 1) {
		menu();
	}
	else {
		cout << "Ha salido del programa." << endl;
	}
}

void tel() {
	cout << "Ingresar Telefono: " << endl;
	int cel;
	cin >> cel;

	cout << endl;
	cout << "Regresar al Menu: " << endl;
	cout << "1. Si " << endl;
	cout << "2. No " << endl;
	cin >> choice;

	if (choice == 1) {
		menu();
	}
	else {
		cout << "Ha salido del programa." << endl;
	}
}

void email() {
	cout << "Ingresar Email: " << endl;
	char correo[30];
	cin >> correo;

	cout << endl;
	cout << "Regresar al Menu: " << endl;
	cout << "1. Si " << endl;
	cout << "2. No " << endl;
	cin >> choice;

	if (choice == 1) {
		menu();
	}
	else {
		cout << "Ha salido del programa." << endl;
	}
}

void grades() {
	cout << "Ingresar Calificaciones: " << endl;
	float cal;
	cin >> cal;

	cout << endl;
	cout << "Regresar al Menu: " << endl;
	cout << "1. Si " << endl;
	cout << "2. No " << endl;
	cin >> choice;

	if (choice == 1) {
		menu();
	}
	else {
		cout << "Ha salido del programa." << endl;
	}
}

void address(){
	cout << "Ingresar Direccion: " << endl;
	cout << "Calle: ";
	char calle[20];
	cin >> calle;
	cout << "Numero: ";
	int num;
	cin >> num;

	cout << endl;
	cout << "Regresar al Menu: " << endl;
	cout << "1. Si " << endl;
	cout << "2. No " << endl;
	cin >> choice;

	if (choice == 1) {
		menu();
	}
	else {
		cout << "Ha salido del programa." << endl;
	}
}