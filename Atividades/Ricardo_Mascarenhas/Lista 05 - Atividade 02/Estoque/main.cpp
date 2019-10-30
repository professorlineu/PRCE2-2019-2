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


    cout << "CADASTRO DE PRODUTOS " << endl ;
    cout << "\n";
    if (i != 0)
    {
        cin.ignore();
    }
    cout << "Informe o nome do produto: " ;
    getline(cin,sNome);
    P1.setNome(sNome);
    cout << "\n";
    if (i != 0)
    {
        cin.ignore();
    }
    cout << "Informe o fornecedor: " ;
    getline(cin,sEnd);
    P1.setEnd(sEnd);
    cout << "\n";
    do
    {
        cout << "Informe o dia / mes / ano da validade do produto: "  ;
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
    cout << "Nome do funcionário que recebeu a mercadoria: " ;
    getline(cin,sCurso);
    A1.setCurso(sCurso);
    cout << "\n";
    do
    {
        cout << "Informe a quantidade de produtos que entraram no estoque: ";
        cin >> iSem ;

        if (iSem <= 0)
        {
            cout << "Valor inválido!" << endl;
        }
    }
    while (iSem <= 0);

    A1.setSemestre(iSem);
    cout << "\n";

    cout << "CADASTRO DE PRODUTOS" << endl ;
    cout << "Nome do produto: " << P1.getNome()<< endl;
    cout << "Fornecedor: " << P1.getEnd()<<endl;
    cout << "Data de validade: " << P1.getDia() << " / " << P1.getMes() << " / " << P1.getAno() << endl;
    cout << "Funcionário (recebeu a mercadoria) : " << A1.getCurso() << endl;
    cout << "Quantidade recebida: " << A1.getSemestre() << endl;

    system("CLS");


    cout << "*************************************" << endl;
    cout << "\n";
    cout << "PAGAMENTOS" << endl;
    cout << "\n";
     cout << "\n";
    if (i != 0)
    {
        cin.ignore();
    }
    cout << "Informe o nome do produto: " ;
    getline(cin,sNome);
    P1.setNome(sNome);
    cout << "\n";
    if (i != 0)
    {
        cin.ignore();
    }
    cout << "Informe o fornecedor: " ;
    getline(cin,sEnd);
    P1.setEnd(sEnd);
    cout << "\n";
    do
    {
        cout << "Informe o dia / mes / ano da validade do produto: "  ;
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

    cout << "Informe o funcionário responsável pelo pegamento: " ;
    getline(cin,sCargo);
    F1.setCargo(sCargo);
    cout << "\n";
    do
    {
        cout << "Informe o valor pago ao fornecedor: ";
        cin >> fSalario ;

        if (fSalario <= 0)
        {
            cout << "Valor inválido!" << endl;
        }
    }
    while (fSalario <= 0);
    F1.setSalario(fSalario);
    cout << "\n";

    cout << "DADOS DO PAGAMENTO" << endl ;
    cout << "Nome do produto: " << P1.getNome()<< endl;
    cout << "Fornecedor: " << P1.getEnd()<<endl;
    cout << "Data de Validade: " << P1.getDia() << " / " << P1.getMes() << " / " << P1.getAno() << endl;
    cout << "Funcionário responsável pelo Pagamento: " << F1.getCargo() << endl;
    cout << "valor: R$ " << F1.getSalario() << endl;

    cout << "*************************************" << endl;
    cout << "\n";

    system("CLS");


}
