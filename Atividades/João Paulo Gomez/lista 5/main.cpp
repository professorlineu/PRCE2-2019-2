#include <iostream>
#include <string>
#include "Pessoa.h"
#include "Aluno.h"
#include "Funcionario.h"

using namespace std;


using namespace std;

int main()
{

    Pessoa p1;
    Aluno a1;
    Funcionario f1;

    int iOp=0;
    string Nome = " ";
    string Endereco= " ";
    int Nascimento = 0;
    int b = 0;
    int c = 0;
    string Curso=" ";
    int Semestre=0;
    float Salario=0;
    string Cargo= " ";

    cout << "Digite seu nome: ";
    //cin >> Nome;//
    getline(cin,Nome);

    p1.setNome(Nome);

    cout<< "Digite seu endereco: ";
    cin>> Endereco;

    p1.setEndereco(Endereco);

    cout<<"Digite sua data de nascimento: ";
    cin>> Nascimento,b,c;

    p1.setNascimento(Nascimento,b,c);


    cout<<"Digite 1 caso seja aluno, digite 2 caso seja funcionario e 0 para sair"<<endl;
    cin>>iOp;

    if (iOp==0)
    {
        return 0;
    }


    else if(iOp==1)
       {
          cout<<"Digite seu curso: ";
          //cin>> Curso;
          getline(cin,Curso);
          a1.setCurso(Curso);

          cout<<"Digite seu semestre ( em numero) : ";
          cin>> Semestre;
          a1.setSemestre(Semestre);

          cout<< "Curso: " <<a1.getCurso()<<endl;
          cout<<"Semestre: " <<a1.getSemestre();
      }

    else if (iOp==2)
    {
        cout<<"Digite seu salario: ";
        cin>>Salario;
        f1.setSalario(Salario);

        cout<<"Digite seu cargo: ";
        cin>>Cargo;
        f1.setCargo(Cargo);

        cout<<"Salario: "<<f1.getSalario();
        cout<<"Cargo: "<<f1.getCargo();
    }



}
