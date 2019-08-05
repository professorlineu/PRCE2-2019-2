/**********************************************************
- Autor:     Guilherme Marques
- Descrição: Cálculo Saldo Banco
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;

float fSaldoMedio = 0;

int main() {

  setlocale(LC_ALL,"");
  system("color F1");

  cout << "Digite o saldo médio para cálculo de crédito extra: ";
  cin >> fSaldoMedio;

  if (fSaldoMedio <= 0)
  {
    cout << "\nPor ter saldo negativo, você não tem direito a crédito!";
  }

  else if (fSaldoMedio >= 0 && fSaldoMedio <= 200)
  {
    cout << "\nVocê tem direito a R$"<< fSaldoMedio/10 << " de crédito adicional";
  }

  else if (fSaldoMedio > 200 && fSaldoMedio <= 300)
  {
    cout << "\nVocê tem direito a R$"<< fSaldoMedio/5 << " de crédito adicional";
  }

  else if (fSaldoMedio > 300 && fSaldoMedio <= 400)
  {
    cout << "\nVocê tem direito a R$"<< fSaldoMedio/4 << " de crédito adicional";
  }

  else if (fSaldoMedio > 400)
  {
    cout << "\nVocê tem direito a R$"<< fSaldoMedio/5 << " de crédito adicional";
  }
}
