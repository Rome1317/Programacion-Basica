#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void menu();
void names();
void matriculas();
void alumnos();
void plates();
void basedatos();
int choice;
char option;
int c;
int id = 1;

string lastname;
string findmat;
bool found = false;

void registrar();
void buscar();
void lista();
void modificar();
void archivo();
void excel();

struct alumno {
	string ape;
	string nom;
	string mat;
	string email;
	string tel;
	string address;
	string num;
	float cal;
	float cal2;
	float cal3;
	float promedio;

};

alumno database[100];

void main() {
	locale::global(locale("spanish"));

	ifstream lectura;

	lectura.open("Base de datos.txt", ios::binary);
	if (lectura.is_open()) {

		while (!lectura.eof()) {
			lectura.read((char*)&database, sizeof(database));
		}
	}
	else {
		cout << "Archivo inexistente o problemas para abrirlo." << endl;
		system("pause>nul");
	}
	
	lectura.close();

    for (int i = 1; i < 100; i++)
	{
		if (database[i].cal != 0) {
			id++;
		}
	}

	menu();
}

void menu() {

	system("cls");
	cout << "Menu: " << endl;
	cout << endl;

	cout << "Entrar a: " << endl;
	cout << "A. Alumnos " << endl;
	cout << "B. Matr�culas" << endl;
	cout << "C. Base de Datos" << endl;
	cout << "D. Modificar" << endl;
	cout << "E. Salir del Menu " << endl;
	cin >> option;

	if (option > 96) {
		option -= 32;
	}

	switch (option)
	{
	case 'A':
		system("cls");
		cout << "Lista De Alumnos: " << endl;
		cout << endl;

		alumnos();

		break;
	case 'B':
		system("cls");
		cout << "Lista De Matr�culas: " << endl;
		cout << endl;

		plates();

		break;
	case 'C':
		system("cls");
		cout << "Base De Datos: " << endl;
		cout << endl;

		basedatos();

		break;
	case 'D':
		
		modificar();

		break;
	default:
		system("cls");
		cout << "Ha salido del programa." << endl;

		break;
	}
	
	archivo();
}

void alumnos() {

	cout << "�Que quiere hacer?" << endl;
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

void plates() {

	cout << "�Que quiere hacer?" << endl;
	cout << "1. Buscar " << endl;
	cout << "2. Lista " << endl;
	cin >> choice;


	switch (choice)
	{
	case 1:
		buscar();
		break;

	case 2:
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

	cout << "Registro: " << endl;
	cout << endl;
	cout << "Cuantos alumnos quiere registrar: ";
	cin >> c;
	system("cls");

	for (int i = 1; i <= c; i++) {

		cout << "Registro:" << endl;
		cout << endl;

		cout << "Ingresar Apellido(s): ";
		cin.ignore();
		getline(cin, database[id].ape);
		cout << "Ingresar Nombre(s): ";
		getline(cin, database[id].nom);
		cout << "Ingresar Matr�cula: ";
		getline(cin, database[id].mat);
		cout << "Ingresar Email: ";
		getline(cin, database[id].email);
		cout << "Ingresar Tel�fono: ";
		getline(cin, database[id].tel);
		cout << "Ingresar Calle: ";
		getline(cin, database[id].address);
		cout << "Ingresar N�mero de Casa: ";
		getline(cin, database[id].num);
		cout << "Calificaci�n 1: ";
		cin >> database[id].cal;
		cout << "Calificaci�n 2: ";
		cin >> database[id].cal2;
		cout << "Calificaci�n 3: ";
		cin >> database[id].cal3;

		database[id].promedio = database[id].cal * 30 / 100 + database[id].cal2 * 45 / 100 + database[id].cal3 * 25 / 100;

		cout << "Promedio: " << database[id].promedio;

		system("pause>nul");

		id++;
		system("cls");
	}

	lista();
}

void buscar() {
	system("cls");
	cout << "Search:" << endl;
	cout << endl;

	cout << "Buscar alumno por: " << endl;
	cout << "1. Apellidos" << endl;
	cout << "2. Matricula" << endl;
	cin >> choice;

	int i = 1;

	switch (choice)
	{
	case 1:
		system("cls");
		cout << "Search:" << endl;
		cout << endl;

		cout << "Ingrese Apellido(s): ";
		cin.ignore();
		getline(cin, lastname);

		while (i < id) {

			if (database[i].ape == lastname) {
				cout << endl;
				cout << "Alumno:" << endl;

				cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
					database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
					database[i].address << "  " << database[i].cal << "  " << database[i].cal2 << "  " <<
					database[i].cal3 << "  " << database[i].promedio << endl;

				found = true;
				break;
			}

			i++;
		}

		if (!found) {
			cout << endl;
			cout << "No hab�a registros con esos apellidos." << endl;
		}

		break;
	case 2:
		system("cls");
		cout << "Search:" << endl;
		cout << endl;

		cout << "Ingrese Matr�cula: ";
		cin.ignore();
		getline(cin, findmat);

		while (i < id) {

			if (database[i].mat == findmat) {
				cout << endl;
				cout << "Alumno:" << endl;

				cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
					database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
					database[i].address << "  " << database[i].cal << "  " << database[i].cal2 << "  " <<
					database[i].cal3 << "  " << database[i].promedio << endl;

				found = true;
				break;
			}

			i++;
		}

		if (!found) {
			cout << endl;
			cout << "No hab�a registros con esa matr�cula." << endl;

		}
		break;
	}

		cout << endl;
		cout << "Quieres modificar algo?" << endl;
		cout << "1. Si " << endl;
		cout << "2. No" << endl;
		cin >> choice;

		if (choice == 1) {

			system("cls");

			cout << "Alumno:" << endl;
			cout << endl;

			cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
				database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
				database[i].address << "  " << database[i].cal << "  " << database[i].cal2 << "  " <<
				database[i].cal3 << "  " << database[i].promedio << endl;
			cout << endl;

			cout << "Modificar: " << endl;
			cout << "A. Apellido(s)" << endl;
			cout << "B. Nombre(s)" << endl;
			cout << "C. Matr�cula" << endl;
			cout << "D. Email" << endl;
			cout << "E. Tel�fono" << endl;
			cout << "F. Calle" << endl;
			cout << "G. N�mero de Casa" << endl;
			cout << "H. Calificaci�n 1" << endl;
			cout << "I. Calificaci�n 2" << endl;
			cout << "J. Calificaci�n 3" << endl;
			cout << "K. Eliminar Alumno" << endl;
			cin >> option;

			if (option > 96) {
				option -= 32;
			}

			switch (option)
			{
			case 'A':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antiguo Apellido: " << database[i].ape << endl;
				cout << endl;
				cout << "Nuevo Apellido: ";
				cin.ignore();
				getline(cin, database[i].ape);

				break;
			case 'B':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antiguo Nombre: " << database[i].nom << endl;
				cout << endl;
				cout << "Nuevo Nombre: ";
				cin.ignore();
				getline(cin, database[i].nom);

				break;
			case 'C':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antigua Matr�cula: " << database[i].mat << endl;
				cout << endl;
				cout << "Nueva Matr�cula: ";
				cin.ignore();
				getline(cin, database[i].mat);

				break;
			case 'D':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antiguo Email: " << database[i].email << endl;
				cout << endl;
				cout << "Nuevo Email: ";
				cin.ignore();
				getline(cin, database[i].email);

				break;
			case 'E':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antiguo Tel�fono: " << database[i].ape << endl;
				cout << endl;
				cout << "Nuevo Tel�fono: ";
				cin.ignore();
				getline(cin, database[i].tel);

				break;
			case 'F':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antigua Calle: " << database[i].address << endl;
				cout << endl;
				cout << "Nueva Calle: ";
				cin.ignore();
				getline(cin, database[i].address);

				break;
			case 'G':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antiguo N�mero de Casa: " << database[i].num << endl;
				cout << endl;
				cout << "N�mero de Casa: ";
				cin.ignore();
				getline(cin,database[i].num);

				break;
			case 'H':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antigua Calificaci�n 1: " << database[i].cal << endl;
				cout << endl;
				cout << "Calificaci�n 1: ";
				cin.ignore();
				cin >> database[i].cal;

				database[i].promedio = database[i].cal * 30 / 100 + database[i].cal2 * 45 / 100 + database[i].cal3 * 25 / 100;


				break;
			case 'I':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antigua Calificaci�n 2: " << database[i].cal2 << endl;
				cout << endl;
				cout << "Calificaci�n 2: ";
				cin.ignore();
				cin >> database[i].cal2;

				database[i].promedio = database[i].cal * 30 / 100 + database[id].cal2 * 45 / 100 + database[i].cal3 * 25 / 100;

				break;
			case 'J':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antigua Calificaci�n 3: " << database[i].cal3 << endl;
				cout << endl;
				cout << "Calificaci�n 3: ";
				cin.ignore();
				cin >> database[i].cal3;

				database[i].promedio = database[i].cal * 30 / 100 + database[i].cal2 * 45 / 100 + database[i].cal3 * 25 / 100;

				break;
			case 'K':
				system("cls");

				for (i = i; i < id; i++) {
					database[i].ape = database[i + 1].ape;
					database[i].nom = database[i + 1].nom;
					database[i].mat = database[i + 1].mat;
					database[i].email = database[i + 1].email;
					database[i].tel = database[i + 1].tel;
					database[i].address = database[i + 1].address;
					database[i].num = database[i + 1].num;
					database[i].cal = database[i + 1].cal;
					database[i].cal2 = database[i + 1].cal2;
					database[i].cal3 = database[i + 1].cal3;
					database[i].promedio = database[i + 1].promedio;
				}

				id--;
				cout << "Eliminar:" << endl;
				cout << endl;

				cout << "El alumno ha sido eliminado con �xito.";

				system("pause > nul");
				menu();
				break;
			default:

				cout << "Ingrese un caracter valido.";
				cout << endl;
				cin >> option;
			}

			cout << endl;

			cout << "Alumno:" << endl;
			cout << endl;

			cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
				database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
				database[i].address << "  " << database[i].cal << "  " << database[i].cal2 << "  " <<
				database[i].cal3 << "  " << database[i].promedio << endl;

			cout << endl;
			cout << "Quiere modificar algo mas?" << endl;
			cout << "1. Si" << endl;
			cout << "2. No" << endl;
			cin >> choice;

			if (choice == 1) {

				modificar();

			}
			else {

				menu();
			}

		}
		else {

			menu();

		}

	}

void lista() {

	if (option == 65) {
		system("cls");
		names();
	}
	else {
		system("cls");
		matriculas();
	}

}

void names() {
	cout << "Lista De Alumnos:" << endl;

	for (int i = 1; i < id; i++) {


		cout << endl;
		cout << database[i].ape << " " << database[i].nom << endl;
		
	}

}

void matriculas() {
	cout << "Lista De Matr�culas:" << endl;

	for (int i = 1; i < id; i++) {


		cout << endl;
		cout << database[i].mat << endl;
		
	}

}

void modificar() {

	buscar();
}

void basedatos() {

	for (int i = 1; i < id; i++) {

		cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
			database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
			database[i].address << "  " << database[i].cal << "  " << database[i].cal2 << "  " <<
			database[i].cal3 << "  " << database[i].promedio << endl;
	}

	system("pause > nul");

	menu();
}

void archivo() {

	ofstream archivo;

	// Se guarda como binario
	archivo.open("Base de datos.txt", ios::binary);

	// Se escribe el arreglo entero en el archivo
	archivo.write((char*)&database, sizeof(database));

	// Al terminar se cierra el archivo
	archivo.close();

	excel();
}

void excel() {

	ofstream datos;

	datos.open("Alumnos.csv");

	datos << "Matriculas" << ",";
	datos << "Apellido(s)" << ",";
	datos << "Nombre(s)" << ",";
	datos << "Email" << ",";
	datos << "Tel�fono" << ",";
	datos << "N�mero Casa" << ",";
	datos << "Direcci�n" << ",";
	datos << "1 Parcial" << ",";
	datos << "2 Parcial" << ",";
	datos << "3 Parcial" << ",";
	datos << "Promedio" << ",";
	datos << endl << endl;

	for (int i = 1; i < id; i++) { 
		datos << (database[i].mat) << ",";
		datos << (database[i].ape) << ",";
		datos << (database[i].nom) << ",";
		datos << (database[i].email) << ",";
		datos << (database[i].tel) << ",";
		datos << "#" << (database[i].num) << ",";
		datos << (database[i].address) << ",";
		datos << (database[i].cal) << ",";
		datos << (database[i].cal2) << ",";
		datos << (database[i].cal3) << ",";
		datos << (database[i].promedio) << ",";
		datos << endl;

	}

	datos.close();

}

