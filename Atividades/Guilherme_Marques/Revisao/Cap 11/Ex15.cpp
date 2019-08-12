11/**********************************************************
- Autor:     Guilherme Marques
- Descrição: Cadastro produtos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
#include <cstdlib>
#include <fstream>
using namespace std;

struct Produto{
    int iCodigo;
    string cDescricao;
    float fPreco;
};
Produto P[100];
int i;
char cResposta;

int main(){

    fstream arquivo;
    arquivo.open("CadastroProdutos.txt",ios::out);

    for(i=0;i<100;i++)
    {
        cout << "\nInsira o código do produto: ";
        cin >> P[i].iCodigo;
        cout << "\nInsira a descricao do produto: ";
        cin.ignore();
        getline(cin,P[1].cDescricao);
        cout << "\nInsira o preco do produto: ";
        cin >> P[i].fPreco;
        arquivo << P[i].iCodigo << " " << P[1].cDescricao << " " << P[i].fPreco << "\n";
        cout << "\nDeseja inserir outro produto (S/N)?: ";
        cin >> cResposta;
        system("CLS");

        if ((cResposta == 's') or (cResposta == 'S'))
        {
        }
        else if ((cResposta == 'N') or (cResposta == 'n'))
        {
            cout << "\n\nOk, produtos gravados no sistema!";
            i = 101;
        }
        else{
            cout << "\n\nResposta Inválida!Encerrando programa e gravando dados";
        }
    }

}
