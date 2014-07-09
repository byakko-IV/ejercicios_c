/*Ejemplo tutorial2 uso de la palabra clave namespace*/
#include <iostream>

int main(){
	using namespace std; /*Esto obliga a utlizar la libreria std en todo el programa*/
	
	cout << "Hola ah\xd6. \n";
	cout << "\x90ste es un 5: " << 5 << "\n";
	cout << "el manipulador std::endl ";
	cout << "escribe una nueva l\xd6nea a la pantalla. ";
	cout << endl;
	cout << "aqu\xd6 vemos un n\xa3mero muy grande: \t" << 70000;
	cout << endl;
	cout << "\x90sta es una suma de 8 y 5: \t";
	cout << 8 + 5 << endl;
	cout << "\x90sta es una fracci\xa2n:\t\t";
	cout << (float) 5/8 << endl;
	cout << "y un n\xa3mero muy, muy grande:\t";
	cout << (double) 7000 * 7000 << endl;
	cout << "Aqu\xd6 puedes colocar";
	cout << " tu nombre... \n";
	cout << "\xadMiguel Angel Hernandez es un programador C++!\n";
	return 0;
}
