/*Programa que muestra el caracter correspondiente al valor nuemrico de cada vuelta*/

#include <iostream>

int main(){
	for(int i = 10; i < 128; i++){
		std::cout << (char) i;
	}
	return 0;
}
