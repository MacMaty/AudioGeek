#ifndef ALBUM_H
#define ALBUM_H
#include <iostream>
#include <string>
#include "Artiste.h"

class Album
{
public :
       Album();
       Album(string p_titre,int p_annee,Artiste * p_artiste);
       Album(Album const& albumACopier);
       ~Album();
       string getTitre();
       void setTitre(string p_titre);
       int getAnnee();
       void setAnnee(int p_annee);
       Artiste * getArtiste();
       void setArtiste(Artiste * p_artiste);
   private :
       string titre;
       int annee;
       Artiste * artiste;
};

#endif // ALBUM_H
