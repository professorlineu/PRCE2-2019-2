#ifndef FILME_H
#define FILME_H
#include <string>
#include <locale.h>
#include <cstdlib>
#include <iostream>

using namespace std;

class filme
{
    public:
        filme();
        ~filme();
    void setID(int);
    void setNome(string);
    void setAno(int);


    int getID();
    string getNome();
    int getAno();



    private:
        int ID;
        string Nome;
        int Ano;
};

#endif // FILME_H
