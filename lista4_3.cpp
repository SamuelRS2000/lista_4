
/*
Lista_4
Exercicio 2
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  /*
  Já que usarei apenas numeros interos para os lados do triangulo retangulos, 
    basta garantir que hipotenusa formada por eles tambem seja intera que terei um triplo de pitágoras: 
  */
    float hipo = 0.0;
    cout << "Os tiplos de pitágoras até 20, são: \nlado1 lado2 Hipotenusa \n";
    for(int lado1=0; lado1<20;lado1++){
         for(int lado2=0; lado2<20; lado2++){
             hipo = sqrt(lado1*lado1 + lado2*lado2);                                      //Calculando a hipotenusa 
             if(floor(hipo) == hipo) cout<< lado1 <<"      " << lado2 << "    " << hipo << endl;  // Checando se a hipotenusa e intera 
         }
    }
    return 0;
}
