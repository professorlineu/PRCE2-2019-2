/**********************************************************
- Autor:     Guilherme Marques
- Descrição: Matriz Soma e Diferença - Ex 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;

int iMatriz1[3][8];
int iMatriz2[3][8];
int iMatrizSoma[3][8];
int iMatrizDif[3][8];
int l,c;
int rand();


int main() {

  cout << "A matriz 1 é:\n\n";
  for (l=0;l<3;l++)
  {
    for (c=0;c<8;c++)
    {
      iMatriz1[l][c] = (rand()%4)+3;
      cout << iMatriz1[l][c] << " ";
    }
    cout << endl;
  }

  cout << endl;
  cout << "A matriz 2 é:\n\n";
  for (l=0;l<3;l++)
  {
    for (c=0;c<8;c++)
    {
      iMatriz2[l][c] = rand()%4;
      cout << iMatriz2[l][c] << " ";
    }
    cout << endl;
  }

  cout << endl;
  cout << "A matriz Soma é:\n\n";
  for (l=0;l<3;l++)
  {
    for (c=0;c<8;c++)
    {
      iMatrizSoma[l][c] =  iMatriz1[l][c] + iMatriz2[l][c];
      cout << iMatrizSoma[l][c] << " ";
    }
    cout << endl;
  }

  cout << endl;
  cout << "A matriz Diferença é:\n\n";
  for (l=0;l<3;l++)
  {
    for (c=0;c<8;c++)
    {
      iMatrizDif[l][c] =  iMatriz1[l][c] - iMatriz2[l][c];
      cout << iMatrizDif[l][c] << " ";
    }
    cout << endl;
  }

  
}
