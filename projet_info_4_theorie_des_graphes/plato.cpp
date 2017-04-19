#include <vector>
#include "plato.h"
#include "pion.h"
#include<iostream>
#include <string>

Plateau::Plateau()
{
std::cout<<"le plateau a bien ete cree"<<std::endl;
}

// Destructeur
Plateau::~Plateau(){
}

void Plateau::afficher_plateau()
{
      Pion pion_noir('6E');
      Pion pion_blanc('62');
      std::vector<std::vector<Pion> > p;

   for(int i=0;i<8;i++)
   {
       std::vector<Pion> t;
       for(int j=0;j<8;j++)
       {
           t.push_back(i);
       }
       p.push_back(t);
   }
   for (int i=0;i<p.size();i++)
   {
       for(int j=0;j<p[i].size();j++)
       {
          if((i==4)&(j==4)||(i==3)&(j==3))
          {
            std::cout<<pion_noir.getCouleur_pion();
          }
          else if ((i==4)&(j==3)||(i==3)&(j==4))
          {
             std::cout<<pion_blanc.getCouleur_pion();
          }
          else
          {
              std::cout<<"-";
          }
       }
       std::cout<<std::endl;
   }

}
