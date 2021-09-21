#include <iostream>
using namespace std;

int main()
{
	cout << "Bienvenido a C++" << "\n" << "Decime tú nombre boludo\n";

	string nombre;

	// Es 100% posible almacenar la variable así pero el inconveniente es que no guara más de una palabra

	// cin >> nombre;
	//Esta línea no dará problemas con los espacios en blanco
	getline(cin, nombre); 

	cout << "Tú nombre es: " << nombre << " Pase un día caché " << "\n";
}