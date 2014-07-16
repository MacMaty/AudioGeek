#ifndef TITRE_H
#define TITRE_H

#include <string>
#include "Album.h"

class Titre
{
public :
      Titre();
      Titre(string p_lien_fichier);
      Titre(string p_nom, string p_lien_fichier);
      Titre(int p_numero,string p_nom,Album * p_album,int p_longueur);
      ~Titre();
      int getNumero();
      void setNumero(int p_numero);
      string getNom();
      void setNom(string p_nom);
      Album * getAlbum();
      void setAlbum(Album * p_album);
      int getLongueur();
      void setLongueur(int p_longueur);
  private :
      int numero;
      string nom;
      Album * album;
      int longueur;
      string lien_fichier;
};

#endif // TITRE_H
