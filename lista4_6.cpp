
/*
Lista4
Exercicio 6
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>
#include <cstdlib> // Para a função rand()
#include <ctime> // Para a função srand()

using namespace std;

int adivinhar_numero() {
  int minimo = 1;
  int maximo = 100;
  int chute;

  while (minimo <= maximo) {
    chute = rand() % (maximo - minimo + 1) + minimo;

    cout << "O número que você pensou é " << chute << "? (maior/menor/igual): ";
    string resposta;
    cin >> resposta;

    if (resposta == "maior") {
      minimo = chute + 1;
    } else if (resposta == "menor") {
      maximo = chute - 1;
    } else if (resposta == "igual") {
      cout << "Adivinhei o número!" << endl;
      return 0;
    } else {
      cout << "Resposta inválida. Tente novamente usando 'maior', 'menor' ou 'igual'." << endl;
    }
  }

  cout << "Não consegui adivinhar o número. O intervalo de busca final é [" << minimo << ", " << maximo << "]." << endl;
  return 1;
}

int main() {
  srand(time(NULL)); // Inicializa o gerador de números aleatórios

  int resultado = adivinhar_numero();

  if (resultado == 0) {
    return 0;
  } else {
    return 1;
  }
}
