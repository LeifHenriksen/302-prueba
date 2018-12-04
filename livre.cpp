#include "livre.h"
#include <string>
Livre::Livre() : titre ("") , auteur ("") , annee (0) , genre (AUTRE), LivreSuivant (NULL){}


Livre::Livre(std::string _titre, std::string _auteur, unsigned int _annee , Genre _genre, Livre *_LivreSuivant) {
  titre = _titre;
  auteur = _auteur;
  annee = _annee;
  genre = _genre;
  LivreSuivant = _LivreSuivant;
}

std::string Livre::getTitre() const { return titre ; }
Livre* Livre::getLivreSuivant()const {return LivreSuivant;}
