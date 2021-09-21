#include <iostream>

using namespace std;


int main()
{

	string salida1 = "Esta es la salida 1";
	int numerito = 2;
	string salida2 = "y";
	string salida3 = "esta la salida 2";

	// En este caso, en c++ el printf no admite string y por esa razón se debe pasar por la funcion c_str()
	printf("%s ,%d, %s %s \n", salida1.c_str(), numerito, salida2.c_str(), salida3.c_str());
	
	return 0;

}