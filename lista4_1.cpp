
/*
Lista3
Exercicio 1
Autor: Samuel Rodrigues dos Santos
Data: 08/04/2024
*/
#include <iostream>

using namespace std;

int main(){
    float total_litros=0,total_Km=0,Km,litros = 0;
    bool fim = false;

    while(!fim) {
      cout << "Para o abastecimento atual insira : \n";
      cout << "Quantidade de litros(l):";
      cin >> litros;
      total_litros += litros;
      cout << "Quantidade de quilometros (Km):";
      cin >> Km;
      total_Km += Km;
      cout << " Foi o ultimo abastecimento ?(1 - para sim ou 0 - para não)";
      cin >> fim;
    }
    cout << "\nMédia do consumo = " << total_Km/total_litros <<" Km/l";
    return 0;
}
