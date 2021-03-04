#include <iostream>

using namespace std;
//Angeles Lopez Manuel Alejandro 2EV9
//Factorial de un numero
//Declaracion de la funcion
int Factorial (int a);
//Funcion principal
int main () {
int N1;
cout << "Introduzca el valor del numero:" << endl;
cin >> N1;
int fact = Factorial (N1);
cout << "El factorial el numero que usted puso es:" << fact << endl;
return 0;
}
//Aplicacion de la funcion
int Factorial (int a) {
int i;
int resultado = 1;
for (i = 1; i <= a; i ++) {
resultado *= i;
}
return resultado;
}
