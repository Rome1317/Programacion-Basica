#include <iostream>
using namespace std;

int main() {
cout << "Programa para ver el numero de diagonales de un poligono regular deseado." << endl;
cout << endl;

cout << "Escribe el numero de lados del poligono:";
int lados;
cin >> lados;

int D;
D = lados * (lados - 3) / 2;
    
cout << "El numero de diagonales de tu poligono es:" << D << endl;

system("pause");
}