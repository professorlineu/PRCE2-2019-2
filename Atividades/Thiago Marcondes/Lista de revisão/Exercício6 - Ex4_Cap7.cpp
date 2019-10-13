// Thiago Vieira Marcondes - 170379x
// Exercicio 6 - Ex4_Cap7

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int matriz[15][5], i=0, j=0;
    float Nota=0, Soma=0, Media=0 , Total=0;
    string Nome, vetor [15];

    setlocale(LC_ALL,"");

    cout << "INSIRA OS NOMES E NOTAS DOS ALUNOS:";

        for(i=0; i<15; i++)
        {
            cin.ignore();
            cout<<"\nNome do Aluno: ";
            getline(cin, Nome);
            vetor[i]=Nome;
            cout<<"Notas do Aluno: ";

            for(j=0; j<5; j++)
            {
            cin>> matriz[i][j];
            }
        }

    cout << "\nAS MÉDIAS DOS ALUNOS E O SEU STATUS FINAL SÃO: \n";

        for(i=0; i<15; i++)
        {
            Soma=0;
            Media=0;

            for (j=0; j<5; j++)
            {
            Soma = Soma + matriz[i][j];
            }
            Media = Soma/5;
            Total = Total + Media;

            cout<<"Aluno: "<<vetor[i]<<endl;
            cout<<"Média: "<<Media<<endl;
            cout<<"Status Final: ";

            if(Media<4)
            {
            cout<<"REPROVADO\n"<<endl;
            }
            else if(Media <6)
            {
            cout<<"EXAME\n"<<endl;
            }
            else if(Media>=6)
            {
            cout<<"APROVADO\n"<<endl;
            }
        }

    cout<<"\nMÉDIA FINAL DA CLASSE: "<< Total / 15 <<endl;

        return 0;
}
