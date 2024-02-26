/*
Escreva um programa que pede para o usuário inserir dois inteiros, obtém os números do usuário, e então imprime o maior número seguido pelas palavras “é o maior”. Se os números forem iguais, imprime a mensagem “Estes números são iguais”.
*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){

  int x, y;

  cout << "Digite dois inteiros: ";
  cin >> x >> y;

  if(x == y)
    cout << "Os números são iguais: " << x << " e " << y << endl; 

  else if(x > y)
    cout << x << " eh maior que " << y << endl;
  
  else
    cout << y << " eh maior do que " << x << endl;

  return 0;
}