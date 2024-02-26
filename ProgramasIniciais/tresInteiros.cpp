#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

  int x, y, z;
  int soma, media, produto;
  int menor, maior;

  cout << "Entre com 3 numeros inteiros:";
  cin >> x >> y >> z;

  soma = x + y + z;
  media = soma / 3;
  produto = x * y * z;

    // Determina o menor número
    menor = x;
    if (y < menor)
        menor = y;
    if (z < menor)
        menor = z;


    // Determina o maior número
    maior = x;
    if (y > maior)
        maior = y;
    if (z > maior)
        maior = z;
    
  cout << "Soma: " << soma << endl;
  cout << "Media: " << media << endl;
  cout << "Produto: " << produto << endl;
  cout << "O menor: " << menor << endl;
  cout << "O maior: " << maior << endl;



  return 0;
}

