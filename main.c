#include <stdio.h>

#define FRIENDS 3   //za vec avtov spremeni
#define KATEGORIJE  5

struct carInstance
{
    int maxSpeed;
    int maxRPM;
    int torque;
    int horsepower;
    int numberOfGears;
};

void funkcija(struct carInstance *Avto)
{
    int tmp[KATEGORIJE] = {0,0,0,0,0};
    int indeks [KATEGORIJE] = {0,0,0,0,0};
    int q;

    for(int i=0; i<FRIENDS; i++)
    {
        q=0;
        if(Avto[i].maxSpeed>tmp[q])
        {
            tmp[q] = Avto[i].maxSpeed;
            indeks[q] = i;
        }
        q++;
        if(Avto[i].maxRPM>tmp[q])
        {
            tmp[q] = Avto[i].maxRPM;
            indeks[q] = i;
        }
        q++;
        if(Avto[i].torque>tmp[q])
        {
            tmp[q] = Avto[i].torque;
            indeks[q] = i;
        }
        q++;
        if(Avto[i].horsepower>tmp[q])
        {
            tmp[q] = Avto[i].horsepower;
            indeks[q] = i;
        }
        q++;
        if(Avto[i].numberOfGears>tmp[q]) {
            tmp[q] = Avto[i].numberOfGears;
            indeks[q] = i;
        }
    }

    printf("avto z najvecjo HITROSTJO je avto %d\n", indeks[0]);
    printf("avto z najvec RPM je avto %d\n", indeks[1]);
    printf("avto z najvec navora je avto %d\n", indeks[2]);
    printf("avto z najvec konji je avto %d\n", indeks[3]);
    printf("avto z najvec prestavami je avto %d\n", indeks[4]);

}


int main() {


    struct carInstance Avto[FRIENDS];

    Avto[0].maxSpeed = 300;
    Avto[0].maxRPM =2000;
    Avto[0].torque =550;
    Avto[0].horsepower = 700;
    Avto[0].numberOfGears = 8;

    Avto[1].maxSpeed = 400;
    Avto[1].maxRPM =7000;
    Avto[1].torque =450;
    Avto[1].horsepower = 500;
    Avto[1].numberOfGears = 7;

    struct carInstance avtoTmp = {100,3000,650,800,6};  //drugačen način inicializacije, lepši izgled kode
    Avto[2] = avtoTmp;

    //dodaj nov avto pod visjim indeksom

    funkcija(Avto);

    return 0;
}


