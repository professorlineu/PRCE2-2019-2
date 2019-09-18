/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descrição: Cap. 6 - Exercício 4
    Faça um programa que receba:
    - as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15x5
    - os nomes dos 15  alunos e armazene-os em um vetor de 15 posições
    O programa deverá calcular e mostrar:
    - para cada aluno,o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado ou exame)
    - a média da classe
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int matriz[15][5], i=0, j=0;
    float fNota=0, fSoma=0, fMedia=0 , fTotal=0;
    string sNome, vetor [15];

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    for(i=0; i<15; i++)
    {
        cin.ignore();
        cout<<"Informe o nome do aluno: ";
        getline(cin, sNome);
        vetor[i]=sNome;


        cout<<"Digite respectivamente as cinco notas do aluno:\n";
        for(j=0; j<5; j++)
        {
            cin>> matriz[i][j];
        }
    }
    for(i=0; i<15; i++)
    {
        fSoma=0;
        fMedia=0;

        for (j=0; j<5; j++)
        {
            fSoma= fSoma + matriz[i][j];
        }
        fMedia = fSoma/5;
        fTotal = fTotal + fMedia;

        cout<<"\nAluno: "<<vetor[i]<<endl;
        cout<<"Média: "<<fMedia<<endl;
        cout<<"Situação: ";
        if(fMedia<4)
        {
            cout<<"REPROVADO"<<endl;
        }
        else if(fMedia <6)
        {
            cout<<"EXAME"<<endl;
        }
        else if(fMedia>=6)
        {
            cout<<"APROVADO"<<endl;
        }
    }
    cout<<"\nMédia da classe: "<< fTotal / 15 <<endl;

        return 0;
}
