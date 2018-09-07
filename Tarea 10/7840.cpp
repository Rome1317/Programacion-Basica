#include <iostream>
using namespace std;

int b;
int a;

int main() {

	cout << "Base: ";
	cin >> b;

	cout << "Altura: ";
	cin >> a;

	cout << endl;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if ((i == 0) || (j == 0) || (i == a - 1) || (j == b - 1)) {
				cout << "* " ;
			}
			else {
				cout << "  ";
			}
		}
	    cout << endl;
	}

	system("pause > nul");

	return 0;
}


