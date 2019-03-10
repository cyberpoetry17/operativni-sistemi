#ifndef LOGICKO_KOLO_H
#define LOGICKO_KOLO_H

#include <vector>

using namespace std;

typedef vector<int>::const_iterator cit;

// Implementacija XOR operacije - treba da se koristi kao funkcija niti
//
// a_pocetak - Iterator na prvi element vektora A koji se obrađuje
// a_kraj    - Iterator iza poslednjeg elementa vektora A koji se obrađuje
// b_pocetak - Iterator na prvi element vektora B koji se obrađuje
// rez       - Iterator u rezultujućem vektoru - elementi počevši sa ovom pozicijom
//trebaju biti popunjeni rezultatima XOR operacije
//
void izvrsiXOR(cit a_pocetak, cit a_kraj, cit b_pocetak, vector<int>::iterator rez)
{

    /*0 XOR 0 = 0
0 XOR 1 = 1
1 XOR 0 = 1
1 XOR 1 = 0*/

    cit ita;
    cit itb;
    int broj1;
    int broj2;
    for(ita=a_pocetak,itb=b_pocetak;ita!=a_kraj;ita++,itb++,rez++){

        broj1=*ita;
        broj2=*itb;

        if(broj1==0 && broj2==0){

            *rez=0;

        }else if(broj1==0 && broj2==1){

            *rez=1;
        }else if(broj1==1 && broj2==0){

            *rez=1;
        }else{

             *rez=0;

        }






    }









}


#endif // LOGICKO_KOLO_H
