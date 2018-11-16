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
int range;
int z;

string lastname;
string findmat;
bool found = false;
bool valid = false;
bool aroba = false;
bool com = false;

void registrar();
void buscar();
void lista();
void modificar();
void archivo();
void excel();
void manual();

struct alumno {
	string ape;
	string nom;
	string mat;
	string email;
	string tel;
	string address;
	string colonia;
	string num;
	float cal = -1;
	float cal2 = -1;
	float cal3 = -1;
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
		cout << "Lectura de Archivo:" << endl;
		cout << endl;

		cout << "Archivo inexistente o problemas para abrirlo." << endl;
		cout << endl;
		cout << "Presione cualquier tecla para entrar a Menu." << endl;
		system("pause>nul");
	}

	lectura.close();

	for (int i = 1; i < 100; i++)
	{
		if (database[i].cal != -1) {
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
	cout << "B. Matrículas" << endl;
	cout << "C. Base de Datos" << endl;
	cout << "D. Modificar" << endl;
	cout << "E. Manual de Usuario" << endl;
	cout << "F. Salir del Menu " << endl;
	cin >> option;

	if (option > 96) {
		option -= 32;
	}

	switch (option)
	{
	case 'A':
		system("cls");
		cout << "Alumnos: " << endl;
		cout << endl;

		alumnos();

		break;
	case 'B':
		system("cls");
		cout << "Matrículas: " << endl;
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
	case 'E':
		system("cls");

		manual();

		break;
	default:
		system("cls");
		cout << "Ha salido del programa." << endl;

		break;
	}

	archivo();
}

void alumnos() {

	cout << "¿Que quiere hacer?" << endl;
	cout << "1. Registrar" << endl;
	cout << "2. Buscar " << endl;
	cout << "3. Lista de Alumnos" << endl;
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

	cout << "¿Que quiere hacer?" << endl;
	cout << "1. Buscar " << endl;
	cout << "2. Lista de matriculas" << endl;
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

		cout << "Ingresar Matrícula: ";
		getline(cin, database[id].mat);

		for (int j = 1; j < id ; j++) {
			
			while ( database[id].mat == database[j].mat) {
				cout << "Esta matrícula ya existe. Intenta de nuevo." << endl;
				getline(cin, database[id].mat);
			}
		}

		cout << "Ingresar Email: ";

		getline(cin, database[id].email);
		range = database[id].email.size();
		
		while (range < 6) {

			cout << "Correo invalido o inexistente." << endl;
			getline(cin, database[id].email);
			range = database[id].email.size();
		}

		for (int z = 1; z <= range; z++) {

			if (database[id].email[z] == 64) {
				aroba = true;
			}

			if (database[id].email[range - 4] == 46 && database[id].email[range - 3] == 99 && database[id].email[range - 2] == 111 && database[id].email[range - 1] == 109) {
				com = true;
			}

			if (aroba == true && com == true) {
				valid = true;
			}
		}

		if (aroba == false && com == true) {

			cout << "Falta @." << endl;
		}

		if (aroba == true && com == false) {

			cout << "Falta .com" << endl;
		}

		if (aroba == false && com == false) {

			cout << "Falta @ y .com" << endl;
		}

		while (valid == 0) {

			aroba = false;
			com = false;

			getline(cin, database[id].email);
			range = database[id].email.size();

			if (range < 6) {

				cout << "Correo invalido o inexistente." << endl;
				getline(cin, database[id].email);
				range = database[id].email.size();
			}

			for (int z = 1; z <= range; z++) {

				if (database[id].email[z] == 64) {
					aroba = true;
				}

				if (database[id].email[range - 4] == 46 && database[id].email[range - 3] == 99 && database[id].email[range - 2] == 111 && database[id].email[range - 1] == 109) {
					com = true;
				}

				if (aroba == true && com == true) {
					valid = true;
				}
			}

			if (aroba == false && com == true) {

				cout << "Falta @." << endl;
			}

			if (aroba == true && com == false) {

				cout << "Falta .com" << endl;
			}

			if (aroba == false && com == false) {

				cout << "Falta @ y .com" << endl;
			}
		}

		cout << "Ingresar Teléfono: ";
		getline(cin, database[id].tel);

		range = database[id].tel.size();
	    z = 0;

		while (z < range) {

			if (database[id].tel[z] < 48 || database[id].tel[z] > 57) {

				cout << "Ingresa solo números." << endl;
				getline(cin, database[id].tel);
				range = database[id].tel.size();
				z = -1;

			}

			z++;
		}


	    while (range < 8 || range > 11) {

				cout << "El teléfono debe tener al menos 8 digitos y ser menor a 12." << endl;
				getline(cin, database[id].tel);
				range = database[id].tel.size();
		}

		cout << "Ingresar Calle: ";
		getline(cin, database[id].address);
		cout << "Ingresar Colonia: ";
		getline(cin, database[id].colonia);
		cout << "Ingresar Número de Casa: ";
		getline(cin, database[id].num);

		cout << "Calificación 1: ";
		cin >> database[id].cal;

		database[id].cal = database[id].cal * 10;
		database[id].cal = ceil(database[id].cal);
		database[id].cal = database[id].cal / 10;
		
		if (database[id].cal > 100) {
			database[id].cal = 100;
		}

		cout << "Calificación 2: ";
		cin >> database[id].cal2;

		database[id].cal = database[id].cal * 10;
		database[id].cal = ceil(database[id].cal);
		database[id].cal = database[id].cal / 10;

		if (database[id].cal2 > 100) {
			database[id].cal2 = 100;
		}

		cout << "Calificación 3: ";
		cin >> database[id].cal3;

		database[id].cal = database[id].cal * 10;
		database[id].cal = ceil(database[id].cal);
		database[id].cal = database[id].cal / 10;

		if (database[id].cal3 > 100) {
			database[id].cal3 = 100;
		}



		if (database[id].cal < 0 || database[id].cal2 < 0 || database[id].cal3 < 0 ) {

			database[id].promedio = 0;
		}

		else {

			database[id].promedio = database[id].cal * 30 / 100 + database[id].cal2 * 45 / 100 + database[id].cal3 * 25 / 100;
		}

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
					database[i].address << "  " << database[i].colonia << "  " << database[i].cal << "  " <<
					database[i].cal2 << "  " << database[i].cal3 << "  " << database[i].promedio << endl;

				found = true;
				break;
			}

			i++;
		}

		if (!found) {
			cout << endl;
			cout << "No había registros con esos apellidos." << endl;
		}

		break;
	case 2:
		system("cls");
		cout << "Search:" << endl;
		cout << endl;

		cout << "Ingrese Matrícula: ";
		cin.ignore();
		getline(cin, findmat);

		while (i < id) {

			if (database[i].mat == findmat) {
				cout << endl;
				cout << "Alumno:" << endl;

				cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
					database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
					database[i].address << "  " << database[i].colonia << "  " << database[i].cal << "  " <<
					database[i].cal2 << "  " << database[i].cal3 << "  " << database[i].promedio << endl;

				found = true;
				break;
			}

			i++;
		}

		if (!found) {
			cout << endl;
			cout << "No había registros con esa matrícula." << endl;

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
			database[i].address << "  " << database[i].colonia << "  " << database[i].cal << "  " <<
			database[i].cal2 << "  " << database[i].cal3 << "  " << database[i].promedio << endl;
		cout << endl;

		cout << "Modificar: " << endl;
		cout << "A. Apellido(s)" << endl;
		cout << "B. Nombre(s)" << endl;
		cout << "C. Matrícula" << endl;
		cout << "D. Email" << endl;
		cout << "E. Teléfono" << endl;
		cout << "F. Calle" << endl;
		cout << "G. Colonia" << endl;
		cout << "H. Número de Casa" << endl;
		cout << "I. Calificación 1" << endl;
		cout << "J. Calificación 2" << endl;
		cout << "K. Calificación 3" << endl;
		cout << "L. Eliminar Alumno" << endl;
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

			cout << "Antigua Matrícula: " << database[i].mat << endl;
			cout << endl;
			cout << "Nueva Matrícula: ";
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

			cout << "Antiguo Teléfono: " << database[i].ape << endl;
			cout << endl;
			cout << "Nuevo Teléfono: ";
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

			cout << "Antigua Colonia: " << database[i].colonia << endl;
			cout << endl;
			cout << "Nueva Colonia: ";
			cin.ignore();
			getline(cin, database[i].colonia);

			break;
		case 'H':
			system("cls");
			cout << "Modificar:" << endl;
			cout << endl;

			cout << "Antiguo Número de Casa: " << database[i].num << endl;
			cout << endl;
			cout << "Nuevo Número de Casa: ";
			cin.ignore();
			getline(cin, database[i].num);

			break;
		case 'I':
			system("cls");
			cout << "Modificar:" << endl;
			cout << endl;

			cout << "Antigua Calificación 1: " << database[i].cal << endl;
			cout << endl;
			cout << "Calificación 1: ";
			cin.ignore();
			cin >> database[i].cal;

			database[i].promedio = database[i].cal * 30 / 100 + database[i].cal2 * 45 / 100 + database[i].cal3 * 25 / 100;


			break;
		case 'J':
			system("cls");
			cout << "Modificar:" << endl;
			cout << endl;

			cout << "Antigua Calificación 2: " << database[i].cal2 << endl;
			cout << endl;
			cout << "Calificación 2: ";
			cin.ignore();
			cin >> database[i].cal2;

			database[i].promedio = database[i].cal * 30 / 100 + database[id].cal2 * 45 / 100 + database[i].cal3 * 25 / 100;

			break;
		case 'K':
			system("cls");
			cout << "Modificar:" << endl;
			cout << endl;

			cout << "Antigua Calificación 3: " << database[i].cal3 << endl;
			cout << endl;
			cout << "Calificación 3: ";
			cin.ignore();
			cin >> database[i].cal3;

			database[i].promedio = database[i].cal * 30 / 100 + database[i].cal2 * 45 / 100 + database[i].cal3 * 25 / 100;

			break;
		case 'L':
			system("cls");

			for (i = i; i < id; i++) {
				database[i].ape = database[i + 1].ape;
				database[i].nom = database[i + 1].nom;
				database[i].mat = database[i + 1].mat;
				database[i].email = database[i + 1].email;
				database[i].tel = database[i + 1].tel;
				database[i].address = database[i + 1].address;
				database[i].colonia = database[i + 1].colonia;
				database[i].num = database[i + 1].num;
				database[i].cal = database[i + 1].cal;
				database[i].cal2 = database[i + 1].cal2;
				database[i].cal3 = database[i + 1].cal3;
				database[i].promedio = database[i + 1].promedio;
			}

			id--;
			cout << "Eliminar:" << endl;
			cout << endl;

			cout << "El alumno ha sido eliminado con éxito.";

			system("pause > nul");
			menu();
			break;
		default:

			cout << "Ingrese un caracter valido.";
			cout << endl;
			cin >> option;
			break;
		}

		cout << endl;

		cout << "Alumno:" << endl;
		cout << endl;

		cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
			database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
			database[i].address << "  " << database[i].colonia << "  " << database[i].cal << "  " <<
			database[i].cal2 << "  " << database[i].cal3 << "  " << database[i].promedio << endl;

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
	cout << "Lista De Matrículas:" << endl;

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
			database[i].address << "  " << database[i].colonia << "  " << database[i].cal << "  " <<
			database[i].cal2 << "  " << database[i].cal3 << "  " << database[i].promedio << endl;
	}

	system("pause > nul");

	menu();
}

void archivo() {

	ofstream archivo;

	archivo.open("Base de datos.txt", ios::binary);

	archivo.write((char*)&database, sizeof(database));

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
	datos << "Teléfono" << ",";
	datos << "Número Casa" << ",";
	datos << "Dirección" << ",";
	datos << "Colonia" << ",";
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
		datos << (database[i].colonia) << ",";
		datos << (database[i].cal) << ",";
		datos << (database[i].cal2) << ",";
		datos << (database[i].cal3) << ",";
		datos << (database[i].promedio) << ",";
		datos << endl;

	}

	datos.close();

}

void manual(){

	ifstream read;
	string line;

	read.open("readme.md");
	if (read.is_open()) {

		while (!read.eof()) {

			getline(read, line);
			cout << line << endl;
		}
	}
	else {
		cout << "Archivo inexistente o problemas para abrirlo." << endl;
		
	}

    system("pause>nul");

	read.close();
	menu();

}