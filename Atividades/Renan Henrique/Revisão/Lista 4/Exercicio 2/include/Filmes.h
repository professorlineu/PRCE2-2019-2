#ifndef FILMES_H
#define FILMES_H

#include <iostream>
#include <string>

using namespace std;

class Filmes
{
    public:
        Filmes();
        ~Filmes();
        void setID();
        void setAno();
        void setNome();
        int getID();
        int getAno();
        string getNome();



    private:

        int ID;
        int Ano;
        string sNome;
};

#endif // FILMES_H

