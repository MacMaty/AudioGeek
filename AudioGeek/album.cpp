#include "album.h"

Album::Album(){
    titre = "inconnu";
    annee = 2000;
    artiste = new Artiste();
}

Album::Album(string p_titre,int p_annee,Artiste * p_artiste){
    titre = p_titre;
    annee = p_annee;
    artiste = p_artiste;
}

Album::Album(Album const& albumACopier){
    titre = albumACopier.titre;
    annee = albumACopier.annee;
    artiste = new Artiste(*(albumACopier.artiste));
}

Album::~Album(){
    delete artiste;// pourquoi suppression d'artiste ??????
   // std::cout << "delete album" << std::endl;
}

std::string Album::getTitre(){
    return titre;
}

void Album::setTitre(std::string p_titre){
    titre = p_titre;
}

int Album::getAnnee(){
    return annee;
}

void Album::setAnnee(int p_annee){
    annee = p_annee;
}

Artiste * Album::getArtiste(){
    return artiste;
}

void Album::setArtiste(Artiste * p_artiste){
    artiste = p_artiste;
}

