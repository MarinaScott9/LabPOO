#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int resultado = 1;

	cin >> a;
	cin >> b;

	for (int i = 0; i < b; i++) {
		resultado = resultado * a;
	}

	cout << resultado;
}