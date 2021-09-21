#include <iostream>

using namespace std;

int funcionEntera()
{
	int suma = 5+5;
	cout << "Se ha ejecutado la operación ";

	return suma;

// Obviamente el return aqui debajo no se ejecutara
	return 5+5; 

	int x = 10;
}

char funcionCharsita(int n)
{
	if (n == 0)
	{
		return 'a';

	}
	return 'x';
}

bool funcionBol(int n, string mensaje)
{
	if(n == 0)
	{
		cout << mensaje;
		return 1;
		return true;
	}

	return 0;
	return false;
}

void procedimiento(int n, string nombre)
{
	if(n == 0)
	{
		cout << "Holaaa " << nombre;
		return;
	}

	cout << "Adioss " << nombre;
}


int main()
{
	// funcionEntera();

	// bool respuesta = funcionBol(0, "Hey");

	// procedimiento(0, "Cristian");

	procedimiento(funcionBol(1, "Hola"), "Cristian");

	return 0;

}

