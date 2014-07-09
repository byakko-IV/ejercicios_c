/*Programa ejemplo del uso de alias*/

#include <iostream>

//definimos el alias para no tener que escribir todo el texto
typedef unsigned short int USHORT; 

int main(){
	using std::cout;
	using std::endl;
	//Ahora solo se cran las variables usando el alias
	USHORT Ancho = 5;
	USHORT Largo;
	Largo = 10;
	USHORT Area = Ancho * Largo;
	
	cout << "Ancho: " << Ancho << "\n";
	cout << "Largo: " << Largo << endl;
	cout << "Area: " << Area << endl;
	
	return 0;
}
