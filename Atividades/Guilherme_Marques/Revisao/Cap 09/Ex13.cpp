/**********************************************************
- Autor:     Guilherme Marques
- Descrição: Repetição de frase
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;

char sFrase[40];
int iNum = 0;
int i;


int main() {
  cout << "Insira uma frase: ";
  cin.getline(sFrase,40);
  cout << "\nQuantas vezes deseja repetir(de 1 a 5)?: ";
  cin >> iNum;
  
  if (iNum < 0 && iNum > 5)
  {
    cout << "Número inválido!";
  }
  else
  {
    for (i=0;i < iNum;i++)
    {
      cout << sFrase << " ";
    }
  }
}
