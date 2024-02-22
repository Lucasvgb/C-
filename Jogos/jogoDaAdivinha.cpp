#include <iostream>

using namespace std; // Vou usar as funções padrões do STD.


int main(){

  cout << "****************************" << endl;
  cout << "* Jogo da Adivinhacao!! *" << endl;
  cout << "****************************" << endl;

  int numeroSecreto = 42;
  
  int chute;
  cout <<"Qual seu chute ? ";
  cin >> chute;
  cout <<"O valor do seu chute foi: " << chute << endl;

  if(chute == numeroSecreto){
    cout <<"Voce acertou !!" << endl;
  }
  else if(chute > numeroSecreto){
    cout <<"O chute foi MAIOR do que o numero" << endl;
  }
  else{
    cout <<"O chute foi MENOR do que o numero" << endl;
  }
  
  return 0;
}
