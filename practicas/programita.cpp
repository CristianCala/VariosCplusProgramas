#include <iostream>

using namespace std;

int funcionsita()
{
	cout << "Has elegido 1 \n";
	return 0;
}

int funcionsita2()
{
	cout << "Has elegido 2 \n";
	return 0;
}

int menu()
{
	cout << "Programa para gestión de dolares \n";
	cout << "Seleccione la transacción que desea realizar \n";


	cout << "1. Calcular N° de $ \n";
	cout << "2. Calcular el valor de Bolivares en $ \n";

	int seleccion = 0;

	cin >> seleccion;	

	if (seleccion == 1)
	{
		funcionsita();
	}
	else if (seleccion == 2)
	{
		funcionsita2();
	}
	else
	{
		cout << "No has seleccionado ninguna opción mostrada \n";
	}


	return 0;
}


int main()
{

menu();

}

