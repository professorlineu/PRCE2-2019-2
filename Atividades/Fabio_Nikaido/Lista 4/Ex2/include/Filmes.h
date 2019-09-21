#ifndef FILMES_H
#define FILMES_H
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

class Filmes
{
    public:
        Filmes();
        ~Filmes();


        void setID(int);
        void setNome(string);
        void setAno(int);

        int getID();
        string getNome();
        int getAno();


    private:
        int ID;
        string nome;
        int ano;

};

#endif // FILMES_H
