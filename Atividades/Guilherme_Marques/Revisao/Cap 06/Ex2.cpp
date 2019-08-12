/**********************************************************
- Autor:     Guilherme Marques
- Descrição: Vetor Múltiplos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;

int iVetor[7];
int iMult2[7];
int iPosi2 = 0;
int iMult3[7];
int iPosi3 = 0;
int iMult23[7];
int iPosi23 = 0;
int i;

int main() {
  for (i=0;i<7;i++)
  {
    cout << "Insira um número: ";
    cin >> iVetor[i];
    cout << endl;
    
    if (iVetor[i]%2 == 0 && iVetor[i]%3 == 0)
    {
      iMult23[iPosi23] = iVetor[i];
      iPosi23++;

    }
    if (iVetor [i]%2 == 0)
    {
      iMult2[iPosi2] = iVetor[i];
      iPosi2++;
    }
    if (iVetor [i]%3 == 0)
    {
      iMult3[iPosi3] = iVetor[i];
      iPosi3++;
    }
  }
  cout << "\nOs Números Múltiplos de 2 são: ";
  for (i=0;i<iPosi2;i++)
  {
    cout << iMult2[i] << " ";
  }

  cout << "\nOs Números Múltiplos de 3 são: ";
  for (i=0;i<iPosi3;i++)
  {
    cout << iMult3[i] << " ";
  }

  cout << "\nOs Números Múltiplos de 2 e 3 são: ";
  for (i=0;i<iPosi23;i++)
  {
    cout << iMult23[i] << " ";
  }
  cout << endl;

}
