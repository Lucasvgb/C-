#include <iostream>

using std::cout;
using std::endl;
using std::cin;

/*
Declarações using que eliminam a necessidade de repetir o prefixo std:: como repetimos em programas anteriores. Uma vez que inserimos essas declarações using, podemos escrever cout em vez de std::cout, cin em vez de std::cin e endl em vez de std:: endl, respectivamente, no restante do programa
*/

int main(){
  int num1, num2;

  cout<<"Entre com dois inteiros: "; // solicita dados ao usuário
  cin >> num1 >> num2; //Lê os numeros fornecidos pelo usuário.

  if( num1 == num2)
    cout << num1 << " == " << num2 << endl;
  
  if(num1 != num2)
    cout << num1 << " != " << num2 << endl;

  if(num1 < num2)
    cout << num1 << " < " << num2 << endl;

  if(num1 > num2)
    cout << num1 << " > " << num2 << endl;

  if(num1 <= num2)
    cout << num1 << " <= " << num2 << endl;

  if(num1 >= num2)
    cout << num1 << " >= " << num2 << endl;

  return 0;

}