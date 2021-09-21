#include <iostream>

using namespace std;

int main() 
{
	// sobre la definición de variables
    char Palabra[5] = "Hola";
    
    // No olvidar valor nulo
    char Palabra2[5];
    Palabra2[0] = 'H';
    Palabra2[1] = 'O';
    Palabra2[2] = 'L';
    Palabra2[3] = 'A';
    Palabra2[4] = 0;

    bool premisa = true;
    bool premisant = false;
    int numero1 = 1, numero2 = 2, numero3 = 3;
    float numero4 = 1.1, numero5 = 1.2, numero6 = 1.3;

    // Para concatenar se hace con "<<"
    // cout << "Probando," << " Probando2\n";
    // return 0;

    cout << Palabra << "." << " " << "Mundo" << " " << "Estoy concatenando";
    return 0;

}