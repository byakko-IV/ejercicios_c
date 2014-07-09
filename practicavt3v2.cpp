/*Programa ejemplo del uso de variables*/

#include <iostream>

int main(){
	using std::cout;
	using std::endl;
	
	unsigned short int Ancho = 5, Largo;
	Largo = 10;
	
	//Creamos una variable unsigned short y la inicializamos con el
	//Resultado de multiplicar Ancho Por Largo
	unsigned short int Area = (Ancho * Largo);
	
	cout << "Ancho: " << Ancho << "\n";
	cout << "Largo: " << Largo << endl;
	cout << "Area: " << Area << endl;
	
	return 0;
}
