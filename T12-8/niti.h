#ifndef NITI_H
#define NITI_H

#include <thread>

using namespace std;

map<string, double> izracunaj(map<string, double>& a, map<string, double>& b)
{

    map<string, double> rezultat;

    thread nit(nadjiPovoljno,a,b,ref(rezultat));
    nit.join();

    return rezultat;

}

#endif // NITI_H
