#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){

  int x , y, soma, produto, diferenca, quociente;

  cout << "Digite dois numeros inteiros: ";
  cin >> x >> y;

  soma = x + y;
  cout << "Essa eh a soma: " << soma << endl;

  diferenca = x - y;
  cout << "Essa eh a diferenca: " << diferenca << endl;

  quociente = x / y;
  cout << "Esse eh o quociente: " << quociente << endl;

  return 0;
}