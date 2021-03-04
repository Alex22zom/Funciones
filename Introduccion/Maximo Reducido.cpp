#include <iostream>

using namespace std;
//Angeles Lopez Manuel Alejandro 2EV9
//Declaracion de la funcion
int Max (int a, int b);
//Funcion principal
int main (){
int N1, N2, N3;
cout << "Introduzca el valor del primer numero:" << endl;
cin >> N1;
cout << "Introduzca el valor del segundo numero:" << endl;
cin >> N2;
cout << "Introduzca el valor del tercer número:" << endl;
cin >> N3;
int max = Max (Max (N1, N2), N3);
cout << "El numero mayor es" << max << endl;
return 0;
}
//Implementacion de la funcion
int Max (int a, int b) {
int c;
if (a> b) {return a;}
else { return b;}
}
