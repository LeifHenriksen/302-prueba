#include <iostream>
#include <string>
#include "livre.h"
#include "PileDeLivres.h"



int main(){
  Livre li("hola"  ,"author" , 2000 , ROMAN , NULL);
  Livre li2("toto"  ,"author" , 2000 , ROMAN , &li);
  Livre li3("tata"  ,"author" , 2000 , ROMAN , &li2);
  Livre li4("ta"  ,"author" , 2000 , ROMAN , &li3);
  Livre li5("li5"  ,"author" , 2000 , ROMAN , &li4);
  Livre li6("kok"  ,"author" , 2000 , ROMAN , &li5);
  //std::cout<< li.getTitre() <<std::endl;
  //std::cout<< li2.getTitre() <<std::endl;
  //std::cout<< li3.getTitre() <<std::endl;
  
  delete li.getLivreSuivant();
  PileDeLivres pile(&li);
  
  
  pile.push(&li2);
  pile.push(&li3);
  pile.push(&li4);
  pile.push(&li5);
  pile.push(&li6);

  pile.printPile();

  pile.pop();
  pile.pop();
  pile.pop();
  pile.pop();
  
  std::cout<<'\n';
  pile.printPile();
}
