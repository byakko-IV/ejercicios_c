/*Programa que muestra el tama�o de los distinto tipos de variables*/

#include <iostream>

int main(){
	using std::cout;
	
	cout << "el tama�o de int es:\t"<< sizeof(int) << " bytes.\n";
	cout << "el tama�o de short es:\t"<< sizeof(short) << " bytes.\n";
	cout << "el tama�o de long es:\t"<< sizeof(long) << " bytes.\n";
	cout << "el tama�o de char es:\t"<< sizeof(char) << " bytes.\n";
	cout << "el tama�o de float es:\t"<< sizeof(float) << " bytes.\n";
	cout << "el tama�o de double es:\t"<< sizeof(double) << " bytes.\n";
	cout << "el tama�o de bool es:\t"<< sizeof(bool) << " bytes.\n";
	
	return 0;
}
