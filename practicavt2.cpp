/*Ejemplo tutorial2 uso de sdt::cout*/
#include <iostream>

int main(){
	std::cout << "Hola ah\xd6. \n";
	std::cout << "\x90ste es un 5: " << 5 << "\n";
	std::cout << "el manipulador std::endl ";
	std::cout << "escribe una nueva l\xd6nea a la pantalla. ";
	std::cout << std::endl;
	std::cout << "aqu\xd6 vemos un n\xa3mero muy grande: \t" << 70000;
	std::cout << std::endl;
	std::cout << "\x90sta es una suma de 8 y 5: \t";
	std::cout << 8 + 5 << std::endl;
	std::cout << "\x90sta es una fracci\xa2n:\t\t";
	std::cout << (float) 5/8 << std::endl;
	std::cout << "y un n\xa3mero muy, muy grande:\t";
	std::cout << (double) 7000 * 7000 << std::endl;
	std::cout << "Aqu\xd6 puedes colocar";
	std::cout << " tu nombre... \n";
	std::cout << "\xadMiguel Angel Hernandez es un programador C++!\n";
	return 0;
}
