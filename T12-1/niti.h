#ifndef NITI_H
#define NITI_H

#include <thread>
#include <vector>

using namespace std;

// Implementacija sabiranja korespondentnih elemenata celih vektora A i B pokretanjem onoliko niti koliko ima elemenata u vektorima
//
// a - Vektor A
// b - Vektor B
//
// Rezultat izvršavanja treba da bude vector<int> koji sadrži rezultat sabiranja korespondentnih elemenata.
//
vector<int> izracunaj(vector<int>& a, vector<int>& b)
{
    // Implementirati ...
    int velicina=a.size();
    vector<int> rezultat(velicina);
    //svaka nit obradjuje po jedan deo ovog niza rezultat

    thread niti[velicina];

    //pravljenje niti


    for(int i=0;i<velicina;i++){

        niti[i]=thread(saberiPar,a.begin()+i,b.begin()+i,rezultat.begin()+i);


    }

    for(int i=0;i<velicina;i++){

        niti[i].join();

    }



 return rezultat;

}

#endif // NITI_H
