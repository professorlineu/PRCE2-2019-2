/**********************************************************
- Autor:     Guilherme Marques
- Descrição: Coletar Dados de Pessoas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;

int i;
float fSomaSalario = 0;
float fSomaFilhos = 0;
int iMaiorSalario = 0;
int iContM = 0;
int iContMR = 0;
struct Pessoa {
  char cSexo;
  int iSalario;
  int iIdade;
  int iFilhos;
};
Pessoa P[5];

int main() {

  for (i=0;i<5;i++)
  {
    cout << "\nInsira seu Sexo(H/M): ";
    cin >> P[i].cSexo;
    cout << "\nInsira seu Salário: ";
    cin >> P[i].iSalario;
    cout << "\nInsira sua Idade: ";
    cin >> P[i].iIdade;
    cout << "\nInsira seu n° de Filhos: ";
    cin >> P[i].iFilhos;

    fSomaSalario = fSomaSalario + P[i].iSalario;
    fSomaFilhos = fSomaFilhos + P[i].iFilhos;

    if (P[i].iSalario > iMaiorSalario)
    {
      iMaiorSalario = P[i].iSalario;
    }
    if (P[i].iSalario > 1000 && P[i].cSexo == 'M')
    {
      iContMR++;
    }
    if (P[i].cSexo == 'M')
    {
      iContM++;
    }
  }

  cout << "\nA média dos salários é: R$" << fSomaSalario/5;
  cout << "\nA média de filhos é: " << fSomaFilhos/5;
  cout << "\nO maior salário é: R$" << iMaiorSalario;
  cout << "\nA % de mulheres que ganham mais de R$1000 é: " << iContMR/iContM*100 << "%";
  
}
