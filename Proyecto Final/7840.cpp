
#include <iostream>
#include <string>
using namespace std;

void menu();
void name();
void tel();
void email();
void matricula();
void grades();
void address();
int choice;

void registrar();
void buscar();
void lista();

struct alumno {
	string ape;
	string nom;
	int mat;
	string email;
	string tel;
	string address;
	int num;
	float cal;
	float cal2;
	float cal3;
	float promedio;

};

int main() {
	locale::global(locale("spanish"));
	menu();
	return 0;
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

	cout << "¿Que quiere hacer?" << endl;
	cout << "1. Registrar" << endl;
	cout << "2. Buscar " << endl;
	cout << "3. Lista " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		registrar();
		break;

	case 2:
		buscar();
		break;

	case 3:
		lista();
		break;

	}


	cout << endl;
	cout << "Regresar al Menu: " << endl;
	cout << "1. Si " << endl;
	cout << "2. No " << endl;
	cin >> choice;

	if (choice == 1) {
		menu();
	}
	else {
		system("cls");
		cout << "Ha salido del programa." << endl;
	}
}

void matricula() {

	cout << "¿Que quiere hacer?" << endl;
	cout << "1. Registrar" << endl;
	cout << "2. Buscar " << endl;
	cout << "3. Lista " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		registrar();
		break;

	case 2:
		buscar();
		break;

	case 3:
		lista();
		break;

	}

	cout << endl;
	cout << "Regresar al Menu: " << endl;
	cout << "1. Si " << endl;
	cout << "2. No " << endl;
	cin >> choice;

	if (choice == 1) {
		menu();
	}
	else {
		system("cls");
		cout << "Ha salido del programa." << endl;
	}
}

void tel() {

	cout << "¿Que quiere hacer?" << endl;
	cout << "1. Registrar" << endl;
	cout << "2. Buscar " << endl;
	cout << "3. Lista " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		registrar();
		break;

	case 2:
		buscar();
		break;

	case 3:
		lista();
		break;

	}

	cout << endl;
	cout << "Regresar al Menu: " << endl;
	cout << "1. Si " << endl;
	cout << "2. No " << endl;
	cin >> choice;

	if (choice == 1) {
		menu();
	}
	else {
		system("cls");
		cout << "Ha salido del programa." << endl;
	}
}

void email() {

	cout << "¿Que quiere hacer?" << endl;
	cout << "1. Registrar" << endl;
	cout << "2. Buscar " << endl;
	cout << "3. Lista " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		registrar();
		break;

	case 2:
		buscar();
		break;

	case 3:
		lista();
		break;

	}

	cout << endl;
	cout << "Regresar al Menu: " << endl;
	cout << "1. Si " << endl;
	cout << "2. No " << endl;
	cin >> choice;

	if (choice == 1) {
		menu();
	}
	else {
		system("cls");
		cout << "Ha salido del programa." << endl;
	}
}

void grades() {

	cout << "¿Que quiere hacer?" << endl;
	cout << "1. Registrar" << endl;
	cout << "2. Buscar " << endl;
	cout << "3. Lista " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		registrar();
		break;

	case 2:
		buscar();
		break;

	case 3:
		lista();
		break;

	}
   
	cout << "Regresar al Menu: " << endl;
	cout << "1. Si " << endl;
	cout << "2. No " << endl;
	cin >> choice;

	if (choice == 1) {
		menu();
	}
	else {
		system("cls");
		cout << "Ha salido del programa." << endl;
	}
}

void address() {

	cout << "¿Que quiere hacer?" << endl;
	cout << "1. Registrar" << endl;
	cout << "2. Buscar " << endl;
	cout << "3. Lista " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		registrar();
		break;

	case 2:
		buscar();
		break;

	case 3:
		lista();
		break;

	}

	cout << endl;
	cout << "Regresar al Menu: " << endl;
	cout << "1. Si " << endl;
	cout << "2. No " << endl;
	cin >> choice;

	if (choice == 1) {
		menu();
	}
	else {
		system("cls");
		cout << "Ha salido del programa." << endl;
	}
}

void registrar() {
	system("cls");
	alumno database[100];
	cout << "Cuantos alumnos quiere registrar: ";
	int c;
	cin >> c;
	int id = 0;
	system("cls");

	for (int i = 0; i < c; i++) {
	}
	lista();
	system("pause > nul");
}

	void buscar() {
		
	}

	void lista() {

	}