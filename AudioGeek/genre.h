#ifndef GENRE_H
#define GENRE_H
#include <iostream>
#include <string>

using namespace std;

class Genre
{

public:
    Genre();
    Genre(string p_nom);
    Genre(Genre const& genreACopier);
    ~Genre();
    string getNom();
    void setNom(string p_nom);

private :
    string nom;

};

#endif // GENRE_H
