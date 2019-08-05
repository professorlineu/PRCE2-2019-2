/**********************************************************
- Autor:     Guilherme Marques
- Descrição: Somar de 1 a N
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;

int iN = 0;
int iSoma = 0;

void Somar()
{
  int i;

  for (i=1; i<=iN;i++)
  {
    iSoma = iSoma + i;
  }
}

int main() {
    cout << "Insira um número inteiro :";
    cin >> iN;
    Somar();
    cout << "A soma de 1 ao número escolhido é: " << iSoma;
}
