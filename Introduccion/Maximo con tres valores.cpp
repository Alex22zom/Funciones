#include <iostream>

using namespace std;
//Angeles Lopez Manuel Alejandro 2EV9
//Declaracion de la funcion
int Max (int a, int b);
//Funcion principal
int main () {
int a, b, c;
cout << "Introduzca el valor del primer numero:";
cin >> a;
cout << "Ingrese el valor del segundo numero:";
cin >> b;
cout << "Ingrese el valor del tercer numero:";
cin >> c;
int max1 = Max (a, b);
int max2 = Max (max1, c);
cout << "EL numero mayor es:" << max2 << endl;
}
int Max (int a, int b)
{
int c;
if (a> b)
{
c = a;
}
else
{
c = b;
}
}
