/*Otras opciones para el manejo de constantes*/
#include <iostream>
int main(){
	const int ENERO = 0;
	const int FEBRERO = 1;
	const int MARZO = 2;
	const int JUNIO = 3;
	const int JULIO = 4;
	const int AGOSTO = 5;
	
	int ahora;
	ahora = AGOSTO;
	
	if(ahora == ENERO || ahora == FEBRERO || ahora == MARZO){
		std::cout << "\nEstamos en invierno\n";
	}else{
		std::cout << "\nEstamos en verano\n";
	}
	return 0;
}
