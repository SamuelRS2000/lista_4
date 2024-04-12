
/*
Lista_4
Exercicio 2
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>

using namespace std;

int fatorial(int a){
     if(a == 0) a =1;
     else for(int i=a-1; i>1; i--) a *= i;
     return a;
     }

int main(){
     int n;
     float e=0.0;
     cout <<"Insira o numero de termos desejados na aproximação";
     cin >> n;
     for(int i = 0; i < n ; i++)e +=1.0/fatorial(i);

     cout << " e (número de euler) = " << e <<" com " << n << " termos";
     return 0;
}
