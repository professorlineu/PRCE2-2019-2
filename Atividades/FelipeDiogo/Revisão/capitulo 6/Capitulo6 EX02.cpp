/**********************************************************
- Autor:     Felipe Diogo
- Descrição: Laço de Repetição
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int vetor[6];
    int i = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");



    cout << "digite o primeiro número do vetor" << endl;
    cin >> vetor[0] ;
    cout << "digite o segundo número do vetor" << endl;
    cin >> vetor[1] ;
    cout << "digite o terceiro número do vetor" << endl;
    cin >> vetor[2] ;
    cout << "digite o quarto número do vetor" << endl;
    cin >> vetor[3] ;
    cout << "digite o quinto número do vetor" << endl;
    cin >> vetor[4] ;
    cout << "digite o sexto número do vetor" << endl;
    cin >> vetor[5] ;
    cout << "digite o setimo número do vetor" << endl;
    cin >> vetor[6] ;


    cout << "\nnúmeros multiplos de 2:" << endl;

if( (vetor[0]% 2) == 0)
{
 cout << vetor[0] << endl;
}

if( (vetor[1]% 2) == 0)
{
 cout << vetor[1] << endl;
}

if( (vetor[2]% 2) == 0)
{
 cout << vetor[2] << endl;
}

if( (vetor[3]% 2) == 0)
{
 cout << vetor[3] << endl;
}

if( (vetor[4]% 2) == 0)
{
 cout << vetor[4] << endl;
}

if( (vetor[5]% 2) == 0)
{
 cout << vetor[5] << endl;
}

if( (vetor[6]% 2) == 0)
{
 cout << vetor[6] << endl;
}

cout << "\nnúmeros multiplos de 3:" << endl;

if( (vetor[0]% 3) == 0)
{
 cout << vetor[0] << endl;
}

if( (vetor[1]% 3) == 0)
{
 cout << vetor[1] << endl;
}

if( (vetor[2]% 3) == 0)
{
 cout << vetor[2] << endl;
}

if( (vetor[3]% 3) == 0)
{
 cout << vetor[3] << endl;
}

if( (vetor[4]% 3) == 0)
{
 cout << vetor[4] << endl;
}

if( (vetor[5]% 3) == 0)
{
 cout << vetor[5] << endl;
}

if( (vetor[6]% 3) == 0)
{
 cout << vetor[6] << endl;
}

cout << "\nnúmeros multiplos de 2 e 3:" << endl;

if( (vetor[0]% 3) == 0 && (vetor[0]% 2) == 0)
{
 cout << vetor[0] << endl;
}

if( (vetor[1]% 3) == 0 && (vetor[1]% 2) == 0)
{
 cout << vetor[1] << endl;
}

if( (vetor[2]% 3) == 0 && (vetor[2]% 2) == 0)
{
 cout << vetor[2] << endl;
}

if( (vetor[3]% 3) == 0 && (vetor[3]% 2) == 0 )
{
 cout << vetor[3] << endl;
}

if( (vetor[4]% 3) == 0 && (vetor[4]% 2) == 0 )
{
 cout << vetor[4] << endl;
}

if( (vetor[5]% 3) == 0 && (vetor[5]% 2) == 0 )
{
 cout << vetor[5] << endl;
}

if( (vetor[6]% 3) == 0 && (vetor[6]% 2) == 0)
{
 cout << vetor[6] << endl;
}




}
