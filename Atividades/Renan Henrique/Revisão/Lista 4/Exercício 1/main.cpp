#include <iostream>
#include "Cliente.h"

using namespace std;

int main()
{
    Cliente c1;

    c1.setID();
    c1.setIdade();
    c1.setNome();
    c1.setEmail();
    c1.setCidade();

    cout << endl;

    c1.getID();
    c1.getNome();
    c1.getIdade();
    c1.getEmail();
    c1.getCidade();

    return 0;
}
