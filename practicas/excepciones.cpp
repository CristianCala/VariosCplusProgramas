#include <iostream>

using namespace std;

int main(){

	try{

		cout << "Divisiones con C++, no llores" << endl;

		int numerador, denominador;

		cout << "Introduzca el primer valor" << endl;

		cin >> numerador;

		cout << "Introduzca el segundo valor" << endl;

		// Este comentario afirma que Carlos es gei :V

		cin >> denominador;

		if (denominador == 0)
			throw denominador;
		else
			cout << "El resultado es:" << numerador/denominador << endl;

	}
	catch (int e){

		cout << "El denominador no es válido." << endl;
	}


	system ("pause");
	return 0;

}