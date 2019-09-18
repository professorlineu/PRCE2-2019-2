/**********************************************************
- Autor:     Guilherme Marques
- Descrição: Cálculo Média Peso Idoso
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;

int iIdade = 0;
float fPeso = 0;
float fPesoKid = 0;
int iContKid = 0;
float fPesoAdo = 0;
int iContAdo = 0;
float fPesoAdu = 0;
int iContAdu = 0;
float fPesoAdu2 = 0;
int iContAdu2 = 0;
int i;

int main()
{
  for (i=0;i<5;i++)
  {
    cout << "\nDigite sua Idade e seu peso: ";
    cin >> iIdade >> fPeso;

    if (iIdade <= 0 || fPeso <= 0)
    {
      cout << "\n\nValor inválido!";
      return 0;
    }
    
    else if (iIdade <=10 && iIdade > 0)
    {
      fPesoKid = fPesoKid + fPeso;
      iContKid++;
    }

    else if (iIdade > 10 && iIdade <= 20)
    {
      fPesoAdo = fPeso + fPesoAdo;
      iContAdo;
    }

    else if (iIdade > 20 && iIdade <= 30)
    {
      fPesoAdu = fPeso + fPesoAdu;
      iContAdu;
    }

    else if (iIdade > 30)
    {
      fPesoAdu2 = fPeso + fPesoAdu2;
      iContAdu2;
    }
  }

  cout << "\nA média de peso entre pessoas de 1 a 10 anos é de: " << fPesoKid/iContKid << "anos de idade";
  
  cout << "\nA média de peso entre pessoas de 11 a 20 anos é de: " << fPesoAdo/iContAdo << "anos de idade";
  
  cout << "\nA média de peso entre pessoas de 21 a 30 anos é de: " << fPesoAdu/iContAdu << "anos de idade";
  
  cout << "\nA média de peso entre pessoas de mais de 30 anos é de: " << fPesoAdu2/iContAdu2 << "anos de idade";
}
