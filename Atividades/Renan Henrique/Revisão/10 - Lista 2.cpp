#include <iostream>

using namespace std;

class Produto
{

public:

void setPeso() {
  cout << "Informe o Peso: ";
  cin >> fPeso;
}

void setPreço() {
  cout << "Informe o Preço: ";
  cin >> fPreço;
}

void ExibirDados() {
  cout << "Peso: " << fPeso << endl;
  cout << "Preço: " << fPreço << endl;
  cout << "Valor: " << fPeso*fPreço << endl;
}

private:

float fPeso;
float fPreço;

};

int main() {

  Produto p1;
  
  p1.setPeso();
  p1.setPreço();
  p1.ExibirDados();
}