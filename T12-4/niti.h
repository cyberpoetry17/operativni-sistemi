#ifndef NITI_H
#define NITI_H

#include <thread>
#include <vector>

using namespace std;

// Implementacija pokretanja tri niti koje treba da pretraže (svaka svoju trećinu)
// ulazni vektor brojeva i nađu element najbliži nuli
//
// ulaz - Ulazni vektor brojeva koji se pretražuje
//
// Povratna vrednost je nađeni element, najbliži
// nuli od svih elemenata koji su obuhvaćeni pretragom
//
double izracunaj(vector<double> ulaz)
{

    int trecina=ulaz.size()/3;

    double minimumi[3];
    thread niti[3];
    //svaka nit uzima trecinu podataka



    for(int i=0; i<3; i++)
    {


        niti[i] = thread(pretrazi, ulaz.begin() + i * (ulaz.size()/3), ulaz.begin() + (i+1) * (ulaz.size()/3), ref(minimumi[i]));
    }

    for(int i=0; i<3; i++)
    {

        niti[i].join();


    }

    double rez;


    rez=minimumi[0];
    for(int i=1; i<3; i++)
    {

        if(abs(minimumi[i])<abs(rez))
        {
            rez=minimumi[i];
        }



    }


    return rez;


}


#endif // NITI_H
