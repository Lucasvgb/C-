#include <iostream>

int main(){

  int number01,number02,sum;
  
  std::cout << "Entre com o primeiro inteiro: ";
  std::cin >> number01; //Lê o primeiro inteiro inserido pelo usuário.

  std::cout <<"Entre com o segundo inteiro: ";
  std::cin >> number02; //Lê o segundo inteiro inserido pelo usuário.

  sum = number01 + number02;
  std::cout <<"A sua dos numeros eh: " << sum << std::endl; //Exibe a soma no terminal 
  //std::endl é um MANIPULADOR DE FLUXO. "Endl" é uma abreviação de end line.

  return 0;
}