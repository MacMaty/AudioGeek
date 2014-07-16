#include "genre.h"


Genre::Genre()
{
    nom = "inconnu";

}

Genre::Genre(string p_nom)
{
   nom = p_nom;
}

Genre::~Genre()
{
    //nothing to delete
}

Genre::Genre(const Genre &genreACopier)
{
    nom = genreACopier.nom;
}

string Genre::getNom()
{
    return nom;
}

void Genre::setNom(string p_nom)
{
    nom = p_nom;
}
