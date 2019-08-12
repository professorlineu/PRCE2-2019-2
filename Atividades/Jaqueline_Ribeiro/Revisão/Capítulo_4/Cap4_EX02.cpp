/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descrição: Cap.4 - Exercício 2
    Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra na tabela a seguir:
    0,0 - 3,0  =  REPROVADO
    3,0 - 7,0  =  EXAME
    7,0 - 10,0 =  APROVADO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNota1 = 0, fNota2 = 0, fMedia = 0 ;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Informe duas notas:" ;
    cin >> fNota1 >> fNota2;

    if(fNota1>=0 && fNota1<=10 && fNota2>=0 && fNota2<=10)
    {
        fMedia = (fNota1 + fNota2)/2;
        cout << "Média das notas: "<< fMedia << endl;

        if( fMedia <3)
        {
            cout << "REPROVADO" << endl;
        }
        else if( fMedia>=3 && fMedia <7)
        {
            cout << "EXAME" << endl;
        }
        else
        {
            cout << "APROVADO" << endl;
        }
    }
    else
    {
        cout<<"Notas inválidas. Reinicie o programa e informe novamente"<<endl;
    }
return 0;
}



