#include <iostream>
#include <string>
using namespace std;

void menu();
void names();
void matriculas();
void grades();
void alumnos();
void plates();
void findname();
void findid();
void basedatos();
int choice;
char option;
int c;
int id = 1;
string lastname;
int findmat;

void registrar();
void buscar();
void lista();
void modificar();

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

alumno database[100];

void main() {
	locale::global(locale("spanish"));
	menu();
}

void menu() {

	system("cls");
	cout << "Menu: " << endl;
	cout << endl;

	cout << "Entrar a: " << endl;
	cout << "A. Alumnos " << endl;
	cout << "B. Matriculas" << endl;
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
		cout << "Lista De Matriculas: " << endl;
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

	system("pause > nul");
}

void alumnos() {

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

void plates() {

	cout << "¿Que quiere hacer?" << endl;
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

		system("pause > nul");
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
		cout << "Ingresar Matricula: ";
		cin >> database[id].mat;
		cout << "Ingresar Email: ";
		cin.ignore();
		getline(cin, database[id].email);
		cout << "Ingresar Telefono: ";
		getline(cin, database[id].tel);
		cout << "Ingresar Calle: ";
		getline(cin, database[id].address);
		cout << "Ingresar Numero de Casa: ";
		cin >> database[id].num;
		cout << "Calificacion 1: ";
		cin >> database[id].cal;
		cout << "Calificacion 2: ";
		cin >> database[id].cal2;
		cout << "Calificacion 3: ";
		cin >> database[id].cal3;
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
	cout << "1. Nombre" << endl;
	cout << "2. Matricula" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		system("cls");
		cout << "Search:" << endl;
		cout << endl;

		findname();

		break;
	case 2:
		system("cls");
		cout << "Search:" << endl;
		cout << endl;

		findid();

		break;
	}

}

void findname() {


	cout << "Ingrese Apellido(s): ";
	cin.ignore();
	getline(cin, lastname);

	bool found = false;

	int i = 1;

	while (i < id) {

		if (database[i].ape == lastname) {
			cout << endl;
			cout << "Alumno:" << endl;

			cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
				database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
				database[i].address << "  " << database[i].cal << "  " << database[i].cal2 << "  " <<
				database[i].cal3 << endl;

			found = true;
			break;
		}

		i++;
	}

	if (!found) {
		cout << endl;
		cout << "No había registros con esos apellidos." << endl;
	}

	cout << endl;
	cout << "Quieres modificar algo?" << endl;
	cout << "1. Si " << endl;
	cout << "2. No" << endl;
	cin >> choice;

	if (choice == 1){

		system("cls");

		cout << "Alumno:" << endl;
		cout << endl;

		cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
			database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
			database[i].address << "  " << database[i].cal << "  " << database[i].cal2 << "  " <<
			database[i].cal3 << endl;
		cout << endl;

		cout << "Modificar: " << endl;
		cout << "A. Apellido(s)" << endl;
		cout << "B. Nombre(s)" << endl;
		cout << "C. Matricula" << endl;
		cout << "D. Email" << endl;
		cout << "E. Telefono" << endl;
		cout << "F. Calle" << endl;
		cout << "G. Numero de Casa" << endl;
		cout << "H. Calificacion 1" << endl;
		cout << "I. Calificacion 2" << endl;
		cout << "J. Calificacion 3" << endl;
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

			cout << "Antigua Matricula: " << database[i].mat << endl;
			cout << endl;
			cout << "Nueva Matricula: ";
			cin.ignore();
			cin >> database[i].mat;

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

			cout << "Antiguo Telefono: " << database[i].ape << endl;
			cout << endl;
			cout << "Nuevo Telefono: ";
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

			cout << "Antiguo Numero de Casa: " << database[i].num << endl;
			cout << endl;
			cout << "Numero de Casa: ";
			cin.ignore();
			cin >> database[i].num;

			break;
		case 'H':
			system("cls");
			cout << "Modificar:" << endl;
			cout << endl;

			cout << "Antigua Calificacion 1: " << database[i].cal << endl;
			cout << endl;
			cout << "Calificacion 1: ";
			cin.ignore();
			cin >> database[i].cal;

			break;
		case 'I':
			system("cls");
			cout << "Modificar:" << endl;
			cout << endl;

			cout << "Antigua Calificacion 2: " << database[i].cal2 << endl;
			cout << endl;
			cout << "Calificacion 2: ";
			cin.ignore();
			cin >> database[i].cal2;

			break;
		case 'J':
			system("cls");
			cout << "Modificar:" << endl;
			cout << endl;

			cout << "Antigua Calificacion 3: " << database[i].cal3 << endl;
			cout << endl;
			cout << "Calificacion 3: ";
			cin.ignore();
			cin >> database[i].cal3;

			break;
		default :

			cout << "Ingrese un caracter valido.";
			cout << endl;

		}

		cout << endl;

		cout << "Alumno:" << endl;
		cout << endl;

		cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
			database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
			database[i].address << "  " << database[i].cal << "  " << database[i].cal2 << "  " <<
			database[i].cal3 << endl;

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

void findid() {

	cout << "Ingrese Matricula: ";
	cin >> findmat;

	bool found = false;

	int i = 1;

	while (i < id) {

		if (database[i].mat == findmat) {
			cout << endl;
			cout << "Alumno:" << endl;

			cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
				database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
				database[i].address << "  " << database[i].cal << "  " << database[i].cal2 << "  " <<
				database[i].cal3 << endl;

			found = true;
			break;
		}

		i++;
	}

		if (!found) {
			cout << endl;
			cout << "No había registros con esa matricula." << endl;
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
				database[i].cal3 << endl;
			cout << endl;

			cout << "Modificar: " << endl;
			cout << "A. Apellido(s)" << endl;
			cout << "B. Nombre(s)" << endl;
			cout << "C. Matricula" << endl;
			cout << "D. Email" << endl;
			cout << "E. Telefono" << endl;
			cout << "F. Calle" << endl;
			cout << "G. Numero de Casa" << endl;
			cout << "H. Calificacion 1" << endl;
			cout << "I. Calificacion 2" << endl;
			cout << "J. Calificacion 3" << endl;
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
				cout << "Apellido(s): ";
				cin.ignore();
				getline(cin, database[i].ape);

				break;
			case 'B':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antiguo Nombre: " << database[i].nom << endl;
				cout << endl;
				cout << "Nombre(s): ";
				cin.ignore();
				getline(cin, database[i].nom);

				break;
			case 'C':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antigua Matricula: " << database[i].mat << endl;
				cout << endl;
				cout << "Matricula: ";
				cin.ignore();
				cin >> database[i].mat;

				break;
			case 'D':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antiguo Email: " << database[i].email << endl;
				cout << endl;
				cout << "Email: ";
				cin.ignore();
				getline(cin, database[i].email);

				break;
			case 'E':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antiguo Telefono: " << database[i].ape << endl;
				cout << endl;
				cout << "Telefono: ";
				cin.ignore();
				getline(cin, database[i].tel);

				break;
			case 'F':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antigua Calle: " << database[i].address << endl;
				cout << endl;
				cout << "Calle: ";
				cin.ignore();
				getline(cin, database[i].address);

				break;
			case 'G':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antiguo Numero de Casa: " << database[i].num << endl;
				cout << endl;
				cout << "Numero de Casa: ";
				cin.ignore();
				cin >> database[i].num;

				break;
			case 'H':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antigua Calificacion 1: " << database[i].cal << endl;
				cout << endl;
				cout << "Calificacion 1: ";
				cin.ignore();
				cin >> database[i].cal;

				break;
			case 'I':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antigua Calificacion 2: " << database[i].cal2 << endl;
				cout << endl;
				cout << "Calificacion 2: ";
				cin.ignore();
				cin >> database[i].cal2;

				break;
			case 'J':
				system("cls");
				cout << "Modificar:" << endl;
				cout << endl;

				cout << "Antigua Calificacion 3: " << database[i].cal3 << endl;
				cout << endl;
				cout << "Calificacion 3: ";
				cin.ignore();
				cin >> database[i].cal3;

				break;

			}

			cout << endl;

			cout << "Alumno:" << endl;
			cout << endl;

			cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
				database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
				database[i].address << "  " << database[i].cal << "  " << database[i].cal2 << "  " <<
				database[i].cal3 << endl;

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
	cout << "Lista De Matriculas:" << endl;

	for (int i = 1; i < id; i++) {


		cout << endl;
		cout << database[i].mat << endl;
		
	}

}

void modificar() {

	buscar();
}

void grades() {

}

void basedatos() {

	for (int i = 1; i < id; i++) {


		cout << endl;
		cout << database[i].mat << "  " << database[i].ape << " " << database[i].nom << "  " <<
			database[i].email << "  " << database[i].tel << "  " << database[i].num << " " <<
			database[i].address << "  " << database[i].cal << "  " << database[i].cal2 << "  " <<
			database[i].cal3 << endl;

	}

	system("pause > nul");

	menu();
}