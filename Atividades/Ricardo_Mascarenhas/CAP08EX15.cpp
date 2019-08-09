/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Função
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;




void PouI (int a[15]);

int main()
{
    //Declaração de variáveis
    int iValor[15];


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    for (int i =0 ; i<15 ; i++)
    {
     cout << "Digite 15 números: " ;
     cin >> iValor[i] ;
    }

PouI (iValor) ;

    return 0;
}






void PouI (int a[15])
{
    int p = 0;

     for (int i =0 ; i<15 ; i++)
    {
    if ( a[i] % 2 == 0 )
    {
        p++;
    }

    }


        cout << " Dos númeors digitados, " << p << " são pares. "<< endl ;



}
