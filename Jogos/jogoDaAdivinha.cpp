#include <iostream>

using namespace std; // Vou usar as funções padrões do STD.


int main(){

  cout << "****************************" << endl;
  cout << "* Jogo da Adivinhacao!! *" << endl;
  cout << "****************************" << endl;

  const int NUMERO_SECRETO  = 42; //Por padrão as constantes ficam em CAPS LOCK.

  bool nao_acertou = true;
  int tentativas = 0;
  
  double pontos = 1000.0;

  while(nao_acertou){

    tentativas += 1;

    int chute;
    cout <<"Tentativa: " << tentativas << endl;
    cout <<"Qual seu chute ? ";
    cin >> chute;
    cout <<"O valor do seu chute foi: " << chute << endl;

    double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0; //usando o valor absoluto.
    pontos -= pontos_perdidos;

    bool acertou = chute == NUMERO_SECRETO;
    bool maior = chute > NUMERO_SECRETO;
  
    if(acertou){
      cout <<"Voce acertou !!" << endl;
      nao_acertou = false;
    }
    else if(maior){
      cout <<"O chute foi MAIOR do que o numero" << endl;
    }
    else{
      cout <<"O chute foi MENOR do que o numero" << endl;
    }
  }

  cout <<"Fim de jogo" << endl;
  cout <<"Voce acertou o numero em: " << tentativas << " tentativas." << endl;
  cout <<"Sua pontuacao foi de: " << pontos <<" pontos." << endl;

  return 0;
}
