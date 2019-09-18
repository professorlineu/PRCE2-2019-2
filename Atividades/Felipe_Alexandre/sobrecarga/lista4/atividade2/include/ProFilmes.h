#ifndef PROFILMES_H
#define PROFILMES_H
#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;
class ProFilmes
{
public:
    ProFilmes();
    ~ProFilmes();
//setter
    void setIDf(int);
    void setNomef(string);
    void setAnolf(int);
    void setYear(int);
//getter
    int getIDf();
    string getNomef();
    int getAnolf();
    int getYear();


private:
    int IDf;
    string Nomef;
    int Anolf;
    int Year;
};

#endif // PROFILMES_H
