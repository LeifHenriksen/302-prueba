#ifndef PILEDELIVRES_H
#define PILEDELIVRES_H
#include "livre.h"

class PileDeLivres{
 private :
  Livre *sommet;

  

 public :

  PileDeLivres(Livre *_sommet);
  void push(Livre *_L);
  void pop();
  void printPile();
  
};

#endif
