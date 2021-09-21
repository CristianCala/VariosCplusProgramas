#include <iostream>
using namespace std;

int main()
{
	cout << "Prueba de sumas a continuación, intenta no llorar" << "\n";

	float numero1, numero2;

	cout << "Por favor, ingrese el primer valor:  " << "\n";

	cin >> numero1;

	cout << "Ahora por favor ingrese el segundo valor" << "\n";

	cin >> numero2;

	cout << "Estos son los resultados: " << "\n";

	float resultado = numero1 + numero2;

	cout << numero1 << "+" << numero2 << " = " << resultado << "\n";

	return 0;
}