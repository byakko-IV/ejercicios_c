/*Trabajar con constantes enumeradas para ver sus ventajas*/
#include <iostream>

int main(){
	enum MES {ENERO, FEBRERO, MARZO, JUNIO, JULIO, AGOSTO};
	MES ahora;
	ahora = JULIO;
	
	if(ahora == ENERO || ahora == FEBRERO || ahora == MARZO){
		std::cout << "\nEstamos en invierno\n";
	}else{
		std::cout << "\nEstamos en verano\n";
	}
	return 0;
}
