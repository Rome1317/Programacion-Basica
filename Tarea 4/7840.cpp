#include <iostream>
#include <math.h>

using namespace std;

void main() {
cout << "Escribe el radio de las coordenadas x,y: ";
float r;
cin >> r;

cout << "Escribe el angulo en grados de las coordenadas x,y: ";
float alfa;
cin >> alfa;
alfa = alfa * (3.141592 / 180);

float y;
y = r * sin(alfa);

float x;
x = sqrt(r * r - y * y); // x = r * cos(alfa) 
	
cout << "Las coordenadas son: " << "(" << x << "," << y << ")" << endl;
    
system("pause");
}