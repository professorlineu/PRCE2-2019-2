#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
    public:
        Horario();
        ~Horario();
        void Hora(int x);
        void Hora(int x, int y);
        void Hora(int x, int y, int z);

        int getHora();
        int getMinuto();
        int getSegundo();
        void HoraCompleta();

    private:
        int iHora;
        int iMinuto;
        int iSegundo;
};

#endif // HORARIO_H
