/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descrição: Lista 4 - Exercício 01
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Filme // classe
{
public:
    void setID(int id) // método
    {
        ID = id;
    }

    void setNome(string n) // método
    {
        Nome = n;
    }

    void setAno(int a) // método
    {
        Ano = a;
    }

    void exibirDados() // saída (get)
    {

        cout << "\nID: " << ID << endl;
        cout << "Nome: " << Nome << endl;
        cout << "Ano de lançamento: " << Ano << endl;

    }


private:
    string Nome; // atributo
    int Ano; // atributo
    int ID; //atributo
};


int main()
{
    int i=0;
    Filme p[2]; // vetor objeto

    string sNome = "";
    int iAno = 0;
    int iId = 0;

    int f1=0, f2=0;


    setlocale(LC_ALL,"");
    system("color F1");
for(i=0; i<2; i++)
{


    do
    {
        cout << "Informe o ID do filme: ";
        cin>> iId;

        if(i==0)
        {
            f1=iId;
        }
        else
        {
            f2=iId;
            if(f1 == f2)
            {
                cout<<"ID inválido"<<endl;
            }
        }
    }while (f1 == f2);
    p[i].setID(iId);


    cin.ignore();
    cout << "Informe o nome do filme: ";
    getline(cin, sNome);
    p[i].setNome(sNome);

    do{
    cout<<"Informe o ano de lançamento do filme: ";
    cin>> iAno;
    if(iAno>2019){
        cout<<"Ano inválido"<<endl;
    }
    }while (iAno>2019);
    p[i].setAno(iAno);
}

    cout << "\n\n\nDados dos filmes:" << endl;
    for(i=0; i<2; i++)
    {
         p[i].exibirDados(); //método saída de dados
    }

    return 0;
}
