#include "livre.h"
#include "PileDeLivres.h"
#include <iostream>

PileDeLivres::PileDeLivres(Livre *_sommet) : sommet (_sommet) {}

void PileDeLivres::push(Livre *_L){sommet = _L ;}
void PileDeLivres::pop(){sommet = sommet->getLivreSuivant();}

void PileDeLivres::printPile(){

  if (sommet!=NULL)
    {
      Livre *liv = sommet;
      do
	{
	  std::cout << liv->getTitre() << std::endl;
	  liv = liv->getLivreSuivant();
	  
	}while(liv != NULL);
    }
}
