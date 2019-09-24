/**********************************************************
- Autor:     Guilherme Marques
- Descrição: Cálculo Média Altura Idoso
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;

float fAltura = 0;
int iIdade= 1;
float fSomaAlt = 0;
int iCont = 0;

int main() {
  
  while (iIdade > 0)
  {
    cout << "\nQual a sua Idade e sua Altura respectivamente (Para encerrar, digite 0 na Idade): ";
    cin >> iIdade >> fAltura;

    if (iIdade >= 50)
    {
      iCont++;
      fSomaAlt = fSomaAlt + fAltura;
    }
  }
  
  cout << "A altura média das pessoas de mais de 50 anos é: "<< fSomaAlt/iCont;
}
