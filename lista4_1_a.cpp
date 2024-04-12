
/*
Lista3
Exercicio 1
Autor: Samuel Rodrigues dos Santos
Data: 08/04/2024
*/
#include <iostream>

using namespace std;

int main(){
     int num;
     cout <<"Insira o numero";
     cin >> num;
     if(num == 0) num =1;
     else for(int i=num-1; i>1; i--) num *= i;
     cout << " O fatorial do número e " << num;
    
     return 0;
}
