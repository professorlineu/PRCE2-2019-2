#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


class Pessoa
{
public:
    void setNome (string);
    void setEnd (string);
    void setDia (int) ;
    void setMes (int) ;
    void setAno (int) ;

    string getNome ();
    string getEnd ();
    int getDia ();
    int getMes ();
    int getAno ();

private:
    string Nome;
    string End;
    int Dia;
    int Mes;
    int Ano;
};





class Aluno:public Pessoa
{
public:
    void setCurso (string);
    void setSemestre (int);

    string getCurso ();
    int getSemestre ();

private:
    string Curso;
    int Semestre;
};



class Funcionario:public Pessoa
{
public:
    void setSalario (float);
    void setCargo (string);

    float getSalario ();
    string getCargo ();

private:
    float Salario;
    string Cargo;
};


#endif // PESSOA_H
