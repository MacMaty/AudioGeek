#include "titre.h"

Titre::Titre(){
    numero = 0;
    nom = "titre inconnu";
}
Titre::Titre(string p_nom, string p_lien_fichier)
{
    nom = p_nom;
    lien_fichier = p_lien_fichier;
}

Titre::Titre(string p_lien_fichier){

lien_fichier=p_lien_fichier;


}


Titre::Titre(int p_numero,string p_nom,Album * p_album,int p_longueur){
    numero = p_numero;
    nom = p_nom;
    album = p_album;
    longueur = p_longueur;
}

Titre::~Titre(){
    delete album;
}

int Titre::getNumero(){
    return numero;
}

void Titre::setNumero(int p_numero){
    numero = p_numero;
}

std::string Titre::getNom(){
    return nom;
}

void Titre::setNom(std::string p_nom){
    nom = p_nom;
}

Album * Titre::getAlbum(){
    return album;
}

void Titre::setAlbum(Album * p_album){
    album = p_album;
}

int Titre::getLongueur(){
    return longueur;
}

void Titre::setLongueur(int p_longueur){
    longueur = p_longueur;
}
