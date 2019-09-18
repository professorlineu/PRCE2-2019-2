#ifndef HORARIO_H
#define HORARIO_H
class Horario
{
public:
// construtor e destrutor
Horario();
~Horario();
// métodos setters
void setHora(int );
void setHora(int , int );
void setHora(int , int , int );
// métodos getters
int getHora();
int getMinuto();
int getSegundo();
void getHoraCompleta();
private:
// atributos
int Hora;
int Minuto;
int Segundo;
};
#endif // HORARIO_H
