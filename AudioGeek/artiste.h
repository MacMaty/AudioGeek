/*!
 * \file Artiste.h
 * \brief Lecteur de musique de base
 * \author Mathieu BOYER
 * \version 0.1
 */
#ifndef ARTISTE_H
#define ARTISTE_H
#include "genre.h"

#include <string>
class Artiste
{
public :
        Artiste();
        Artiste(std::string p_nom, Genre * p_genre);
        Artiste(Artiste const& artisteACopier);
        ~Artiste();
        std::string getNom();
        void setNom(std::string p_nom);
        Genre * getGenre();
        void setGenre(Genre * p_genre);
    private :
        std::string nom;
        Genre * genre;
};

#endif // ARTISTE_H
