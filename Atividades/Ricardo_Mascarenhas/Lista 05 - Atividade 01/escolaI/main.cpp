#include <iostream>
#include "Pessoa.h"
#include <string.h>
#include <locale.h>
#include <cstdlib>


using namespace std;

int main()
{
    Pessoa P1 ;
    Aluno A1;
    Funcionario F1;
    string sNome ;
    string sEnd;
    int iDia = 0;
    int iMes = 0;
    int iAno = 0;
    string sCurso ;
    int iSem = 0;
    float fSalario = 0;
    string sCargo ;
    int i=0;


    cout << "CADASTRO DE ALUNOS " << endl ;
    cout << "\n";
    if (i != 0)
    {
        cin.ignore();
    }
    cout << "Informe o nome do aluno: " ;
    getline(cin,sNome);
    P1.setNome(sNome);
    cout << "\n";
    if (i != 0)
    {
        cin.ignore();
    }
    cout << "Informe o endereço do aluno: " ;
    getline(cin,sEnd);
    P1.setEnd(sEnd);
    cout << "\n";
    do
    {
        cout << "Informe o dia / mes / ano do nascimento do aluno: "  ;
        cin >> iDia >> iMes >> iAno;


        if (iDia <= 0)
        {
            cout << "Valor inválido!" << endl;
        }
    }
    while (iDia <= 0);

    P1.setDia(iDia);
    P1.setMes(iMes);
    P1.setAno(iAno);
    cout << "\n";
    if (i != 0)
    {
        cin.ignore();
    }
    cout << "Informe o curso do aluno: " ;
    getline(cin,sCurso);
    A1.setCurso(sCurso);
    cout << "\n";
    do
    {
        cout << "Informe o semestre do aluno: ";
        cin >> iSem ;

        if (iSem <= 0)
        {
            cout << "Valor inválido!" << endl;
        }
    }
    while (iSem <= 0);

    A1.setSemestre(iSem);
    cout << "\n";

    cout << "DADOS DOS ALUNOS" << endl ;
    cout << "Nome: " << P1.getNome()<< endl;
    cout << "Endereço: " << P1.getEnd()<<endl;
    cout << "Data de Nascimento: " << P1.getDia() << " / " << P1.getMes() << " / " << P1.getAno() << endl;
    cout << "Curso: " << A1.getCurso() << endl;
    cout << "Semestre: " << A1.getSemestre() << endl;

    system("CLS");


    cout << "*************************************" << endl;
    cout << "\n";
    cout << "CADASTRO DE FUNCIONÁRIOS" << endl;
    cout << "\n";
    cout << "\n";
    if (i != 0)
    {
        cin.ignore();
    }
    cout << "Informe o nome do aluno: " ;
    getline(cin,sNome);
    P1.setNome(sNome);
    cout << "\n";
    if (i != 0)
    {
        cin.ignore();
    }
    cout << "Informe o endereço do aluno: " ;
    getline(cin,sEnd);
    P1.setEnd(sEnd);
    cout << "\n";
    do
    {
        cout << "Informe o dia / mes / ano do nascimento do aluno: "  ;
        cin >> iDia >> iMes >> iAno;


        if (iDia <= 0)
        {
            cout << "Valor inválido!" << endl;
        }
    }
    while (iDia <= 0);
    P1.setDia(iDia);
    P1.setMes(iMes);
    P1.setAno(iAno);
    cout << "\n";
    if (i != 0)
    {
        cin.ignore();
    }
    cout << "Informe o cargo do funcionário: " ;
    getline(cin,sCargo);
    F1.setCargo(sCargo);
    cout << "\n";
    do
    {
        cout << "Informe o salário do funcionário: ";
        cin >> fSalario ;

        if (fSalario <= 0)
        {
            cout << "Valor inválido!" << endl;
        }
    }
    while (fSalario <= 0);
    F1.setSalario(fSalario);
    cout << "\n";

    cout << "DADOS DOS FUNCIONÁRIOS" << endl ;
    cout << "Nome: " << P1.getNome()<< endl;
    cout << "Endereço: " << P1.getEnd()<<endl;
    cout << "Data de Nascimento: " << P1.getDia() << " / " << P1.getMes() << " / " << P1.getAno() << endl;
    cout << "Cargo: " << F1.getCargo() << endl;
    cout << "Salário: " << F1.getSalario() << endl;

    cout << "*************************************" << endl;
    cout << "\n";

    system("CLS");


}
