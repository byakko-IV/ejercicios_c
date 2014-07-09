/*Ejercicio de vitutorial 2 para el uso de funciolnes*/
#include <iostream>

//Funcion de ejemplo
//imprime en pantalla un mensaje
void EjemploFuncion(){
	std::cout << "Un ejemplo de funci\xa2n\n";
}

/*
  funcion main imprime un mensaje 
  llama a EjemploFuncion, luego imprime 
  un segundo mensaje
*/
int main(){
	std::cout << "Es main\n";
	EjemploFuncion();
	std::cout << "De vuelta a main\n";
	return 0;
}
