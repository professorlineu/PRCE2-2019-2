#ifndef FILME_H
#define FILME_H

#include <string>

using namespace std;

class Filme
{
    public:
        Filme();
        ~Filme();

        void setID(int);
        void setID2(int);
        void setF1(string);
        void setF2(string);
        void setAno(int);
        void setAno2(int);

        int getID();
        int getID2();
        string getF1();
        string getF2();
        int getAno();
        int getAno2();



    private:

        string F1;
        string F2;
        int Ano, Ano2;
        int ID, ID2;

};

#endif // FILME_H
