/**********************************************************
- Autor:     Guilherme Marques
- Descrição: Gerenciador Estoque
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctype.h>
using namespace std;

class Estoque // classe Pessoa
{
public:
    void setNome(string n)
    {
      Nome = n;
    }
    void setValor(float v)
    {
      while(v<=0)
      {
        cout << "Valor inválido!";
      }
      if(v>0)
      {
        Valor = v;
      }
    }
    void setQuant(int q)
    {
      while(q<=0)
      {
        cout << "Quantidade inválida!";
      }
      if(q>0)
      {
        Quant = q;
      }
    }

    void getDados()
    {
      cout << "Nome: " << Nome;
      cout << "\nValor: " << Valor;
      cout << "\nQuantidade: " << Quant;
    }

private:
    string Nome;
    double Valor;
    int Quant;
};

int main() {
  string sNome;
  float fValor;
  int iQuant;
  Estoque P[5];
  
  for (int i=0;i<5;i++)
  {
    cout << "\nDigite o nome do produto n° " << i+1 << ": ";
    cin.ignore();
    getline(cin, sNome);
    P[i].setNome(sNome);
    
    cout << "Digite o valor do produto: ";
    cin >> fValor;
    P[i].setValor(fValor);

    cout << "Digite a quantidade desse produto: ";
    cin >> iQuant;
    P[i].setQuant(iQuant);
  }
  
  for (int i=0;i<5;i++)
    {
        cout << "\n\n\nDados do produto " << i+1 << endl;
        P[i].getDados();
    }

}
