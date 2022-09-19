#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int edad = 0;
	int suma_edades = 0;
	int num_edades = 0;
	int contador = 1;
	int promedio_edades = 0;
	
	cout << "Ingrese numero de edades a ingresar: ";
	cin >> num_edades;
	
	do {
		cout << "Ingrese edad " << contador << ": ";
		cin >> edad;
		suma_edades = suma_edades + edad;
		contador++;
	} while (contador <= num_edades);
	promedio_edades = suma_edades / (contador - 1);
	cout << "La suma de edades es: " << suma_edades << endl;
	cout << "El promedio de edades es: " << promedio_edades << endl;
	
	return 0;
}
