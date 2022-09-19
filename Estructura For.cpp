#include <iostream>
#include <math.h>

using namespace std;
int main() {
	int edad= 0;
	int suma_edades = 0;
	int num_edades = 0;
	int contador = 0;
	int promedio_edades = 0;
	
	cout << "Ingrese numero de edades a ingresar: ";
	cin >> num_edades;
	
	for(int i = 1; i <= num_edades; i++) {
		cout << "Ingrese edad " << i << ": ";
		cin >> edad;
		suma_edades = suma_edades + edad;
		contador = i;
	}
	promedio_edades = suma_edades / (contador);
	cout << "La suma de edades es: " << suma_edades;
	cout << "El promedio de edades es: " << promedio_edades;
	
	return 0;
}
