#include "artiste.h"


Artiste::Artiste(){
    nom = "inconnu";
    genre = new Genre();
}

Artiste::Artiste(string p_nom, Genre * p_genre){
    nom = p_nom;
    genre = p_genre;
}

Artiste::Artiste(Artiste const& artisteACopier){
    nom = artisteACopier.nom;
    genre = new Genre(*(artisteACopier.genre));
}

Artiste::~Artiste(){
    delete genre;
   // std::cout << "delete artiste" << std::endl;
}

string Artiste::getNom(){
    return nom;
}

void Artiste::setNom(string p_nom){
    nom = p_nom;
}

Genre * Artiste::getGenre(){
    return genre;
}

void Artiste::setGenre(Genre * p_genre){
    genre = p_genre;
}
