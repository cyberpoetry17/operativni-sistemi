#ifndef NITI_H
#define NITI_H

#include <thread>
#include <map>

using namespace std;

// Implementacija pokretanja dodatne niti koja treba da napravi
//novi rečnik (koristeći funkciju "napraviRecnik")
//
// brojNiti - Broj niti koje je potrebno startovati
map<string, string> izracunaj(map<string, string> engSrp)
{
   map<string,string> srpEng;
//mape moramo po referenci da sutamo
    thread nit;
    nit=thread(napraviRecnik,ref(engSrp),ref(srpEng));
    nit.join();
return srpEng; //mora da vrati nesto


}

#endif // NITI_H
