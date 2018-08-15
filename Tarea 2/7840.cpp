#include <iostream> 
using namespace std;

int main() {
cout << "Nombre:" << endl;   
char n[20];
cin >> n;

cout << "Apellido:" << endl;
char a[20];
cin >> a;

cout << "Edad:" << endl;
int e;
cin >> e;

cout << "Telefono:" << endl;
char t[20];
cin >> t; 

cout << endl;

cout << "Nombre:" << a << ", " << n << "." << endl;
cout << "---" << endl;
cout << "Edad: " << e << " anios." << endl;
cout << "Telefono: +52 " << t << endl;

system("pause");
return 0;
}

