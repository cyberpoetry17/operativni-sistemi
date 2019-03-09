#ifndef PRETRAGA_H
#define PRETRAGA_H

#include <cmath>
#include <vector>

using namespace std;

// Funkcija koja će biti iskorišćena kao funkcija niti - pretražuje ulaznu kolekciju (zadati su iteratori koji definišu granice pretrage) tražeći broj najbliži nuli.
//
// pocetak  - Iterator koji pokazuje na prvi element kolekcije koji učestvuje u pretrazi
// kraj     - Iterator iza poslednjeg elementa koji učestvuje u pretrazi
// najblizi - Nađeni element, najbliži nuli od svih elemenata koji su obuhvaćeni pretragom (izvršenjem funkcije ovaj broj se popuni)
//
void pretrazi(vector<double>::const_iterator pocetak, vector<double>::const_iterator kraj, double& najblizi)
{
    // jednostavniji nacin ispod

    vector<double>::const_iterator it;
    double trenutni=0;
    double neg=-1;
    double poz=1;
    double mini=1000;

    for(it=pocetak; it!=kraj; it++)
    {
        trenutni=*it;

        // cout<<trenutni<<endl;
        if(trenutni<0)
        {
            trenutni*=neg;

            cout<<trenutni<<endl;
        }
        else
        {


            trenutni*=poz;
            cout<<trenutni<<endl;

        }


        if(trenutni<mini)
        {
            mini=trenutni;
        }

    }


    najblizi=mini;






    /* jednostavniji nacin





        najblizi = *pocetak;
    for (vector<double>::const_iterator it = pocetak + 1; it != kraj; it++) {
            najblizi = *it;
        }
    }





    */







}

#endif // PRETRAGA_H
