#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
  int x;
  int y;
  int z;
  int result;

  cout << "Digite tres numeros inteiro: ";
  cin >> x >> y >> z; //Lê os numeros fornecidos pelo usuário.

  result = x * y * z;

  cout << "O produto eh: " << result << endl;

  return 0;
}