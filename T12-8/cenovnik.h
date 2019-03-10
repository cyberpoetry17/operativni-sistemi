#ifndef CENOVNIK_H
#define CENOVNIK_H

#include <string>
#include <map>

using namespace std;

void nadjiPovoljno(map<string, double> a, map<string, double> b, map<string, double> &jeftino)
{

  map<string ,double>::iterator it1;
  string s1,s2;


  for(it1=a.begin();it1!=a.end();it1++){

      jeftino[it1->first]=min(it1->second,b[it1->first]);

  }












}

#endif // CENOVNIK_H
