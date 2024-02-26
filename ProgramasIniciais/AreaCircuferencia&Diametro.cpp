#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

/*
Escreva um programa que lê o raio de um círculo como um inteiro e imprime o diâmetro, a circunferência e a área do círculo. Utilize o valor constante 3,14159 para π. Faça todos os cálculos em instruções de saída.
*/
int main (){

    int raio;
    double pi = 3.14159;
    double AreaDiametro, AreaCirculo, circunferencia, diametro;

    cout <<"Entre com um numero inteiro: ";
    cin >> raio;

    circunferencia = 2 * pi * raio;
    diametro = 2 * raio;
    AreaCirculo = pi . pow(raio,2);
    AreaDiametro = pi . pow(diametro / 2,2); 

    cout << "Circunferência: " << circunferencia << endl;
    cout << "Diâmetro: " << diametro << endl;
    cout << "Área do Círculo: " << AreaCirculo << endl;
    cout << "Área do Diâmetro: " << AreaDiametro << endl;


  return 0;
}

