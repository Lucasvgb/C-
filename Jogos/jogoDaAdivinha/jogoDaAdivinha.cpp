#include <iostream>
#include <cstdlib> // Biblioteca padrao do C++
#include <ctime> // Biblioteca de medicaço de tempo em C++.

using namespace std; // Vou usar as funções padrões do STD.


int main(){

  //Cabeçalho inicial do programa.
  cout << "****************************" << endl;
  cout << "* Jogo da Adivinhacao!! *" << endl;
  cout << "****************************" << endl;

  //Cabeçalho mostrando os níveis de dificuldade.
  cout << "Escolha seu nivel de dificuldade: " << endl;
  cout << "Facil (F), Medio (M) ou Dificil (D)" << endl;
  char dificuldade;
  cin >> dificuldade;

  int numero_de_tentativas;

  // Fazendo o nivel de dificuldade
  if(dificuldade == 'F'){
    numero_de_tentativas = 15;
  }
  else if(dificuldade == 'M'){
    numero_de_tentativas = 10;
  }
  else{
    numero_de_tentativas = 5;
  }

  //Setando a semente do numero aleátorio com a funcao s, aglutidando com a funcao rand, que fica srand.
  srand(time(NULL));
  const int NUMERO_SECRETO  = rand() % 100; //Numero do acertou. OBS:Por padrão as constantes ficam em CAPS LOCK.
 
  bool nao_acertou = true;
  int tentativas = 0; // Variavel para guardar o numero de tentativas.
  
  double pontos = 1000.0; // Pontuação do jogo, vai ate 1000.

  for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++){

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
      break;
    }
    else if(maior){
      cout <<"O chute foi MAIOR do que o numero" << endl;
    }
    else{
      cout <<"O chute foi MENOR do que o numero" << endl;
    }
  }

  cout <<"Fim de jogo" << endl;
  if(nao_acertou){
    cout <<"Voce perdeu!! Tente novamente !" << endl;
  }
  else{
    cout <<"Voce acertou o numero em: " << tentativas << " tentativas." << endl;
    cout.precision(2); //Setar um numero de casas depois da virgula de um numero.
    cout << fixed; // Modificador "fixed" se não os numeros saem na notação cientifica.
    cout <<"Sua pontuacao foi de: " << pontos <<" pontos." << endl;

  }

  return 0;
}
