
/*
Lista4
Exercicio 5
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>
using namespace std;
int main(){
    int num[5];
    for(int i = 0; i<5 ; i++){
        cout <<"Insira o "<< i+1 <<"ª número\n";
        cin >> num[i]; 
    }
    for(int i = 0; i<5 ; i++){
        for(int j=0;j <num[i];j++) cout << "*";
        cout << endl;
    }
    return 0;
}
