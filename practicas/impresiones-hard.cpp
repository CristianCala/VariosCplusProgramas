#include <iostream>
using namespace std;


int main()
{

	// Si es posible no usarlo
	char temporal[100];

	printf("Dame tú nombre\n");

	scanf("%100s", temporal);

	string nombre = temporal;

	printf("Te damos la bienvenida %s", nombre.c_str());
}