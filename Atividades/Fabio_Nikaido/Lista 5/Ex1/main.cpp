#include <iostream>
#include <string>
#include "Aluno.h"
#include "Funcionario.h"

using namespace std;

int main()
{
    //Variaáveis (ALUNO)
    string n = " ";
    string e = " ";
    int d = 0;

    string c = " ";
    int s = 0;

    Aluno a1;

    Funcionario f1;


    //Código (ALUNO)
    cout << "ALUNO" << endl << endl;

    cout << "Digite o seu nome: ";
    cin >> n;
    a1.setNome(n);

    cout << "Digite o seu Endereco: ";
    cin >> e;
    a1.setEndereco(e);

    cout << "Digite sua Data de Nascimento: ";
    cin >> d;
    a1.setDataNascimento(d);

    cout << "Digite o seu curso: ";
    cin >> c;
    a1.setCurso(c);

    cout << "Digite o semestre do curso: ";
    cin >> s;
    a1.setSemestre(s);

    cout << endl;

    cout << "Nome: " << a1.getNome() << endl;
    cout << "Endereco: " << a1.getEndereco() << endl;
    cout << "Data de Nascimento " << a1.getDataNascimento() << endl;
    cout << "Curso " << a1.getCurso() << endl;
    cout << "Semestre: " << a1.getSemestre() << endl;

    cout << endl << endl;

    //Código (FUNCIONÁRIO)
    cout << "FUNCIONARIO" << endl << endl;

    cout << "Digite o seu nome: ";
    cin >> n;
    f1.setNome(n);

    cout << "Digite o seu Endereco: ";
    cin >> e;
    f1.setEndereco(e);

    cout << "Digite sua Data de Nascimento: ";
    cin >> d;
    f1.setDataNascimento(d);

    cout << "Digite o seu cargo: ";
    cin >> c;
    f1.setCargo(c);

    cout << "Digite o seu salario: ";
    cin >> s;
    f1.setSalario(s);

    cout << endl;

    cout << "Nome: " << f1.getNome() << endl;
    cout << "Endereco: " << f1.getEndereco() << endl;
    cout << "Data de Nascimento " << f1.getDataNascimento() << endl;
    cout << "Cargo " << f1.getCargo() << endl;
    cout << "Salario: " << f1.getSalario() << endl;

}
