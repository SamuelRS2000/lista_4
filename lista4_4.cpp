
/*
Lista4
Exercicio 4
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>
#include <cmath>
using namespace std;

int main (){
     int nprod, qprod;
     float valor_total=0.0;
     char fim;
     while(1){
        cout << "Digite a seguir o número do Produto de 1 a 5 \n";
        cin >> nprod;
        cout << "Digite a seguir a quantidade de venda dele \n";
        cin >> qprod;

        switch(nprod){
            case 1: 
              valor_total += 2.98 * qprod;
              break;
            case 2: 
              valor_total += 4.50 * qprod;
              break;
            case 3: 
              valor_total += 9.98 * qprod;
              break;
            case 4: 
              valor_total += 4.49 * qprod;
              break;
            case 5: 
              valor_total += 6.87 * qprod;
              break;
            default : 
            cout << "Quando solicitado o numero do produto coloque de 1 a 5\n";
        }
        cout << "E o ultimo registro ? (s - sim ou n - não)";
        cin >> fim;

        if(fim == 's') break;
        else if (fim == 'n'); 
        else cout << "Opção invalida , escolha \"s\" ou \"n\" \n"; 
     }
     cout << "Valor total dos produtos e R$ " << valor_total;
     return 0;
}
