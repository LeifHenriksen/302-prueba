#ifndef LIVRE_H
#define LIVRE_H

#include <string>
enum Genre{
  ROMAN,
  FANTASY,
  SF,
  BD,
  AUTRE
};

class Livre{


 private :
  std::string titre;
  std::string auteur;
  unsigned int annee;
  Genre genre;
  Livre *LivreSuivant;

 public :
  Livre();
  Livre(std::string _titre, std::string _auteur, unsigned int _annee , Genre _genre, Livre *_LivreSuivant);
  
  std::string getTitre() const;
  std::string getAuteur() const;
  unsigned int getAnnee() const;
  Genre getGenre() const;
  Livre* getLivreSuivant() const;

  void setTitre(std::string newTitre);
  void setAuteur(std::string newAuteur);
  void setAnnee(unsigned int newAnnee);
  void setGenre(Genre newGenre);
  void setLivreSuivant(Livre *LivreSuivant);
  
};




#endif
