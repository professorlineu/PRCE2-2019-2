/**********************************************************
- Autor:     Guilherme Marques
- Descrição: Cálculo Peso Ideal
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;

float fAltura = 0;
char cResposta;

int main() {

  setlocale(LC_ALL,"");
  system("color F1");

  cout << "Olá, insira por favor a sua altura (em metros): ";
  cin >> fAltura;
  cout << "\nQual o seu sexo (H/M): ";
  cin >> cResposta;
  cResposta = toupper(cResposta);

    if (isalpha(fAltura) || (cResposta == 'H' && fAltura > 0 && fAltura < 3))
    {
      cout << "\nO seu peso ideal é de " << (72*fAltura)-58 << " kilos";
    }

    else if (isalpha(fAltura) || (cResposta == 'M' && fAltura > 0 && fAltura < 3))
    {
      cout << "\nO seu peso ideal é de " << (62.1*fAltura)-44.7 << " kilos";
    }
    else
    {
      cout << "\nResposta inválida! Reinicie o Programa";
    }
}
