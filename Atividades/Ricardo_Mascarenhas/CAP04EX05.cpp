/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Operações
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNum1 = 0;
    float fNum2 = 0;
    int ii = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    void Op (float a, float b);



    //Código do programa

    cout << "PROGRAMA DE CÁLCULOS BÁSICOS" << endl ;



    cout << "Digite dois números: " << endl;
    cin >> fNum1 >> fNum2 ;

    Op (fNum1, fNum2);





    return 0;
}


void Op (float a, float b)
{

    int iOp = 0;
    float fResultado = 0;
    float fResultado1 = 0;
    float fResultado2 = 0;
    float fResultado3 = 0;
    float fResultado4 = 0;






    cout << "opções: \n 1- Média entre os números digitados. \n 2- Diferença do maior pelo menor. \n 3- Produto entre os números digitados. \n 4- Divisão do primeiro pelo segundo. " << endl ;
    cin >> iOp ;

    switch (iOp)
    {
    case 1:
         fResultado = (a + b)/2 ;

    cout << "A Média entre " << a << " e " << b << " é igual a: " << fResultado << "." ;
    break;

    case 2:
        if ( a > b)
        {
           fResultado1 = (a - b);

            cout << " A diferença de " << a << " para " << b << " é igual a: " << fResultado1 << endl ;
        }
        else
        {
           fResultado2 = (b - a);

            cout << " A diferença de " << a << " para " << b << " é igual a: " << fResultado2 << endl ;
        }
        break;

    case 3:
       fResultado4 =  (a * b);

        cout << " O produto entre " << a << " e " << b << " é igual a: " << fResultado4 << endl ;
        break;

    case 4:
        if ( b > 0)
        {
           fResultado3 = (a / b);

            cout << " A divisão entre "  << a << " e " << b << " é igual a: " << fResultado3 << endl ;
        }
        else
        {
            cout << " Operação inválida, segundo termo deve ser diferente de zero." << endl ;
        }
        break;

    default:
        cout << "Código Inválido!" << endl ;

    }

}
