/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Atividade 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <string.h>

using namespace std;

class Estoque
{
public:
    void setNome (string n)
    {
        //cout << "Informe o nome do produto: " ;
        //getline(cin,Nome);

        Nome = n;
    }

    void setQuantidade ()
    {
        do
        {
            cout << "Informe quantas unidades do produto entraram no estoque: ";
            cin >> Quantidade;

            if (Quantidade <= 0)
            {
                cout << "Valor inválido!" << endl;
            }
        }
        while (Quantidade <= 0);
    }

    void setValor ()
    {
        do
        {
            cout << "Informe o valor do produto: R$";
            cin >> Valor;

            if (Valor <= 0)
            {
                cout << "Valor inválido!" << endl;
            }
        }
        while (Valor <= 0);
    }

    void setCodigo (int c)
    {
        Codigo = c;
    }

    void setAnoValidade (int an)
    {
        AnoValidade = an;
    }

    string getNome ()
    {
        return Nome;
    }

    int getQuantidade ()
    {
        return Quantidade;
    }

    float getValor ()
    {
        return Valor;
    }

    int getCodigo ()
    {
        return Codigo;
    }

    int getAnoValidade ()
    {
        return AnoValidade;
    }

private:
    string Nome;
    int Quantidade;
    float Valor;
    int Codigo;
    int AnoValidade;
    int i;

};


int main()
{
    setlocale(LC_ALL,"");
    system("color F1");
//***********************************************************
    Estoque E1[5] ;

    string sNome;
    //int iQuantidade = 0;
    //float fValor = 0;
    int iCodigo = 0;
    int iAnoValidade = 0;
//************************************************************


    cout << "CONTROLE DE ESTOQUE" << endl;
    cout << "\n" ;
//************************************************************

    for (int i = 0; i<5; i++)
    {
        cout << "Informe o nome do produto: " ;
        //getline(cin,sNome);
        //getline não está funcionando :(
        cin >> sNome ;
        E1[i].setNome(sNome);

        cout << endl;

        // cout << "Informe quantas unidades do produto entraram no estoque: " ;
        //  cin >> iQuantidade ;
        E1[i].setQuantidade();

        cout << endl;

        //cout << "Informe o valor do produto: " ;
        // cin >> fValor ;
        E1[i].setValor();

        cout << endl;

        cout << "Informe o código do produto: " ;
        cin >> iCodigo ;
        E1[i].setCodigo(iCodigo);

        cout << endl;

        cout << "Informe o ano de validade do produto: " ;
        cin >> iAnoValidade ;
        E1[i].setAnoValidade(iAnoValidade);

        system("CLS");
    }
//************************************************************

    cout << "\n INFORMAÇÕES DO ESTOQUE: " << endl ;

    for (int i = 0; i<5; i)
    {
        cout << "Nome do Produto: " << E1[i].getNome() << endl;

        cout << endl;

        cout << "Quantidade no estoque: " << E1[i].getQuantidade() << endl;

        cout << endl;

        cout << "Valor do Produto: " << E1[i].getValor() << endl;

        cout << endl;

        cout << "Código do Produto: " << E1[i].getCodigo() << endl;

        cout << endl;

        cout << "Ano de validade do Produto: " << E1[i].getAnoValidade() << endl;

        cout << endl;

    }
//************************************************************





    return 0;
}
