/*Programa que muestra el tamaño de los distinto tipos de variables*/

#include <iostream>

int main(){
	using std::cout;
	
	cout << "el tamaño de int es:\t"<< sizeof(int) << " bytes.\n";
	cout << "el tamaño de short es:\t"<< sizeof(short) << " bytes.\n";
	cout << "el tamaño de long es:\t"<< sizeof(long) << " bytes.\n";
	cout << "el tamaño de char es:\t"<< sizeof(char) << " bytes.\n";
	cout << "el tamaño de float es:\t"<< sizeof(float) << " bytes.\n";
	cout << "el tamaño de double es:\t"<< sizeof(double) << " bytes.\n";
	cout << "el tamaño de bool es:\t"<< sizeof(bool) << " bytes.\n";
	
	return 0;
}
