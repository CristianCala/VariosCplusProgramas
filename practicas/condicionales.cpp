#include <iostream>

using namespace std;

int main()
{

	cout << "Escriba del uno al 5 por favor. \n";
	int opcion = 0;

	cin >> opcion;

	switch(opcion)
	{
		case 1: cout << "Has seleccionado la opción número 1 \n";
		break;

		case 2: cout << "Has seleccionado la opción número 2 \n";
		break;

		case 3: cout << "Has seleccionado la opción número 3 \n";
		break;

		case 4: cout << "Has seleccionado la opción número 4 \n";
		break;

		case 5: cout << "Has seleccionado la opción número 5 \n";
	}

	cout << "No has escrito nada de lo que te pedimos\n ";
}
