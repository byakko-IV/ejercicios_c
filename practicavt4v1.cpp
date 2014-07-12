/*Trabajando con constantes*/
#include <iostream>

int main(){
	const float PI = 3.1416;
	int r;
	std::cout << "Ingreza radio de un circulo:\n";
	std::cin >> r;
	std::cout << "el area es " << PI * (r * r );
}
