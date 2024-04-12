
/*
Lista_4
Exercicio 2
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/

#include <iostream>

using namespace std;

int main(){
    cout << "(A)                               (B)                                (C)                             (D)                              \n";
    for(int i=0; i<=10;i++){
         // (A)
         for(int j=0;j<=i;j++)cout << "* ";
         for(int j=0;j<=(9-i);j++)cout << "  ";
         cout << "           ";

         // (B)
         for(int j=i;j<=10;j++)cout << "* ";
         for(int j=1;j<=i;j++)cout << "  ";
         cout << "           ";

         // (C)
         for(int j=0;j<=i;j++)cout << "  ";
         for(int j=0;j<=(9-i);j++)cout << "* ";
         cout << "           ";

         // (D)
         for(int j=i;j<=10;j++)cout << "  ";
         for(int j=1;j<=i;j++)cout << "* ";
         cout << "           ";

         cout << endl;
    }
    return 0;
}
