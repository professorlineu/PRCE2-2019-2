/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Potência
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;





void Pot(int b, int e);


int main()
{
    //Declaração de variáveis
    int fB = 0;
    int fE = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Base: " << endl ;
    cin >> fB ;

    cout << "Expoenete: " << endl;
    cin >> fE ;

    Pot (fB,fE);


    return 0;
}




void Pot(int b,int e){

    int iResultado = 1;

if (b==0){
    cout << "Resultado: 0" << endl ;
}
if (e==0){
    cout << "Resultado: 1" << endl ;
}

if (b!=0 && e!=0){
    for ( int i=0; i<e; i++)
    {
        iResultado = iResultado * b;
    }
    cout << "Resultado: " << iResultado ;
}


}
