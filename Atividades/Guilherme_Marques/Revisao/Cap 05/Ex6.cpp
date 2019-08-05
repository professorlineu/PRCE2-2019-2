/**********************************************************
- Autor:     Guilherme Marques
- Descrição: Cálculo Valor Gasto
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;

float fValor = 0;
int iCont= 1;
char cCodigo;
float fPrazo = 0;
float fVista = 0;

int main() {
  cout << "---------------------\n";
  cout << "Tabela de Códigos:\n";
  cout << "V = à vista\n";
  cout << "P = à prazo\n";
  cout << "---------------------\n";

  while (iCont != 16)
  {
    cout << "\nQual o código e o valor da " << iCont << "ª transação: ";
    cin >> cCodigo >> fValor;

    if (cCodigo == 'V')
    {
      fVista = fVista + fValor;
      iCont++;
    }

    else if (cCodigo == 'P')
    {
      fPrazo = fPrazo + fValor;
      iCont++;
    }

    else
    {
      cout << "\nResposta Inválida! Reinicie o código";
      return 0;
    }
  }
  cout << "\nO Valor total à vista foi de R$" << fVista;
  cout << "\nO Valor total à prazo foi de R$" << fPrazo;
  cout << "\nO Valor total gasto foi de R$" << fVista + fPrazo;
  cout << "\nO valor da primeira parcela será de R$" << fPrazo/3;


}
