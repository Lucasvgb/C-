#include <iostream>

using namespace std; // Vou usar as funções padrões do STD.


int main(){

  cout << "****************************" << endl;
  cout << "* Jogo da Adivinhacao!! *" << endl;
  cout << "****************************" << endl;

  const int NUMERO_SECRETO  = 42; //Por padrão as constantes ficam em CAPS LOCK.
  bool nao_acertou = true;
  
  while(nao_acertou){

    int chute;
    cout <<"Qual seu chute ? ";
    cin >> chute;
    cout <<"O valor do seu chute foi: " << chute << endl;

    bool acertou = chute == NUMERO_SECRETO;
    bool maior = chute > NUMERO_SECRETO;
  
    if(acertou){
      cout <<"Voce acertou !!" << endl;
    }
    else if(maior){
      cout <<"O chute foi MAIOR do que o numero" << endl;
    }
    else{
      cout <<"O chute foi MENOR do que o numero" << endl;
    }
  }
  
  return 0;
}
