#include <iostream>
//Maximo de dos numeros
//Angeles Lopez Manuel Alejandro 2EV9
using namespace std;
//Declaracion
void Max (int a, int b);
//Funcion main
int main (){
int a, b;
cout << "Introduzca el primer numero:";
cin >> a;
cout << "Introduzca el segundo numero:";
cin >> b;
Max (a, b);
}
//Implementacion de la funcion
void Max (int a, int b)
{
if(a> b)
{
cout << a << "es mayor" << endl;
}
else if(b > a)
{
cout << b << "es mayor" << endl;
}
else
{
cout << "Error" << endl;
}
}
