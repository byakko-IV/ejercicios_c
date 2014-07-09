/*Ejercicio de tutorial en uso de funciones conparametros*/

#include <iostream>

int suma(int primero, int segundo){
	std::cout << "En suma(), recibido " << primero << " y " << segundo << "\n";
	return (primero + segundo);
}

int main(){
	using std::cout;
	using std::cin;
	
	
	cout << "Estamos en main\n";
	int a, b, c;
	cout << "Escribe dos numeros";
	cin >> a;
	cin >> b;
	cout << "Llamar a suma()\n";
	c=suma(a, b);
	cout << "de vuelta a main\n";
	cout << "c fue configurado como " << c;
	cout << "\n Saliendo... \n\n";
	return 0;
}
