/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descrição: Lista 4 - Exercício 01
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class ContaBancaria // classe
{
public:
    void setSaldo(double s) // método ou função membro
    {
        Saldo = s;
    }

    void setCredito(double c) // método ou função membro
    {
        Saldo = Saldo + c;
    }

    void setDebito(double d) // método ou função membro
    {
        Saldo = Saldo - d;
    }

    void getSaldo() // saída (get)
    {
        cout << "Novo saldo: " << Saldo << endl;
    }


private:
    double Saldo;

};


int main()
{
    int i=0, iOp=0;
    ContaBancaria p[2]; // vetor objeto


    double dSaldo =0, dCredito=0, dDebito=0 ;



    setlocale(LC_ALL,"");
    system("color F1");
    for(i=0; i<2; i++)
    {
        cout << "\nInforme o Saldo atual: ";
        cin>> dSaldo;
        p[i].setSaldo(dSaldo);


        cout<<"1-\tCREDITO\n2-\tDEBITO"<<endl;
        do{
        cout<<"\nInforme a ação a ser efetuada: ";
        cin >> iOp;
            if(iOp!=1 && iOp!=2)
            {
                cout<<"Opção inválida"<<endl;
            }
        }while(iOp!=1 && iOp!=2);


        if(iOp==1)
        {

            do{
            cout << "Informe o valor a ser creditado: ";
            cin>> dCredito;
                if(dCredito<0)
                {
                    cout<<"Valor inválido"<<endl;
                }
            }while (dCredito<0);
            p[i].setCredito(dCredito);
            }

        if(iOp==2)
        {

            do{
            cout << "Informe o valor a ser debitado: ";
            cin>> dDebito;
                if(dDebito>dSaldo)
                {
                    cout<<"Valor do debito superior ao saldo da conta"<<endl;
                }
        }while (dDebito>dSaldo);
        p[i].setDebito(dDebito);
        }

        cout<<"\nAtividades finalizadas"<<endl;
        p[i].getSaldo(); //método saída de dados

    }



    return 0;
}
