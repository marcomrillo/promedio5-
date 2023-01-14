#include <iostream>
using namespace std;
int main() {
  int numero;
  int suma=0;
  int numerosLeidos =0;

  while(numerosLeidos < 5)
  {
  cout<<"ingrese un numero"<<endl;

  cin>> numero;

   suma = suma + numero;

    numerosLeidos++;
    }

  cout<<"la suma de todos los numeros es: "<<suma<<endl;

  cout<<"el promedio es: "<<suma/5;

}