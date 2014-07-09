/*Ejemplo tutorial2 uso de la palabra clave using*/
#include <iostream>

int main(){
	using std::cout; /*El uso de using indica que se utilizara el metodo cout del objeto std de la libreria estandar*/
	using std::endl;
	
	cout << "Hola ah\xd6. \n"; /*Permitiendo que solo escribamos cout para indicar una salida por terminal*/
	cout << "\x90ste es un 5: " << 5 << "\n";
	cout << "el manipulador std::endl ";
	cout << "escribe una nueva l\xd6nea a la pantalla. ";
	cout << endl; /*y que solo escribamos endl para indicar el fin de la linea*/
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
