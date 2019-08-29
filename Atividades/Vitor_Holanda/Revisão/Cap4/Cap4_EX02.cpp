Autor:     Vitor de Oliveira Holanda
- Descrição: Cap.4 - Exercício 2

Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra na tabela a seguir:
    0,0 - 3,0  =  REPROVADO
    3,0 - 7,0  =  EXAME
    7,0 - 10,0 =  APROVADO


#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
    float nota1,nota2,somanota=0,mediaaluno;
    float mediaaritmetica;
    int i,aprovado=0,reprovado=0,exame=0;
    for(i =1; i<=6; i++)
    {
        cout<<("\n digite a primeira nota:");
        cin>>nota1;
        cout<<("\n digite a segunda nota:");
        cin>>nota2;
        somanota=nota1+nota2;
        mediaaluno=somanota/2;
        if(mediaaluno >=7)
        {
            cout<<("\n aluno aprovado!");
	    aprovado++;
        }

        else if(mediaaluno >3 && mediaaluno<7)

        {
            cout<<("\n aluno exame!");
	    exame++;
        }

            else
	{

cout<<"\n aluno reprovado!";
                 reprovado++;
            }


      }
return 0;
}
