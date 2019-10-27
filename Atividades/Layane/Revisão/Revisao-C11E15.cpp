/**********************************************************
- Autor:     Layane Quissak
- Descrição: Cap 11 Ex 15
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
#include <cstdlib>
#include <fstream>
using namespace std;

struct Produto
{
    int iCodigo;
    string cDescricao;
    float fPreco;
};
Produto P[100];
int i;
char cResposta;

int main()
{

    setlocale(LC_ALL,"");
    system("color F1");

    fstream arquivo;
    arquivo.open("CadastroProdutos.txt",ios::out);

    for(i=0; i<100; i++)
    {
        cout << "Insira o código do produto: "<<endl;
        cin >> P[i].iCodigo;
        cout << "Insira a descricao do produto: "<<endl;
        cin.ignore();
        getline(cin,P[1].cDescricao);
        cout << "Insira o preco do produto: "<<endl;
        cin >> P[i].fPreco;
        arquivo << P[i].iCodigo << " " << P[1].cDescricao << " " << P[i].fPreco << endl;
        cout << "Deseja inserir outro produto (S/N)?: "<<endl;
        cin >> cResposta;
        system("CLS");

        if ((cResposta == 's') or (cResposta == 'S'))
        {
        }
        else if ((cResposta == 'N') or (cResposta == 'n'))
        {
            cout << "\nProdutos gravados no sistema!";
            i = 101;
        }
        else
        {
            cout << "\n\nResposta Inválida";
        }
    }

}
