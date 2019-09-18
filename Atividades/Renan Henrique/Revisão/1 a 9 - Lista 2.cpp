#include <iostream>
#include <string>

using namespace std;
bool TF = false;

class Estoque {

public:

void setNome () { //Método de entrada do nome
if (TF) {   //IF para evitar que o ignore tire a primeira letra do nome
  cout << "Digitar o nome do produto: ";
  cin.ignore();
  getline (cin, sNome);
  }

else {
  cout << "Digitar o nome do produto: ";
  getline (cin, sNome);  
  }  
}

void setQuant () { //Método de entrada da quantidade

do  {
        cout << "Quantidade do produto: ";
        cin >> iQuant;
       if (iQuant <= 0) {
       cout << "Quantidade inválida!!!" << endl;
       }
    }while(iQuant <= 0);  
}

void setValor () { //Método de entrada dos valores

do  {
  cout << "Preço do produto: ";
  cin >> fVal;
    if (fVal < 0) {
      cout << "Preço inválido!!!" << endl;
    }
  }while (fVal < 0);
}

void ExibirDados () {
  
  cout << endl << endl << "Nome do produto: " << sNome << endl;
  cout << "Quantidade comprada: " << iQuant << endl;
  cout << "Valor pago: " << fVal << endl;
}


private:        //Atributos da classe
  string sNome;
  int iQuant;
  float fVal;
};

int main() {


Estoque p1[4];

for (int i; i < 5; i++) {
  
  p1[i].setNome();

  p1[i].setQuant();

  p1[i].setValor();

  p1[i].ExibirDados();

  TF = true;

  cout << endl << endl;
}



}