#include <iostream>

using namespace std;

//Suma de dos numeros enteros.
//Angeles Lopez Manuel Alejandro 2EV9.
//Declaramos la funcion
void Suma(int a, int b);
//Esta es nuestra funcion principal
int main()
{
    int N1, N2;
	cout << "Introduzca el valor del primer operando: " << endl;
	cin >> N1;
	cout << "Introduzca el valor del segundo operando: " << endl;
	cin >> N2;
	Suma (N1, N2);
	return  0 ;
}
//Se implementa la funcion
void  Suma ( int a, int b) {
	int c = a + b;
	cout << "El resultado de... " << a << " + " << b << "es: " << c << endl;
}
