#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <fmod.h>
#include <fstream>

using namespace std;

class Player
{
public:
    Player();
    ~Player();
    int play(const string &);

           string getArtist();
           string getTitle();
           unsigned int getLength();
           unsigned int getCurrentPos();


           int  pause();
           int  resume();
           void avancer(unsigned int);
           void reculer(unsigned int);
           void setVolume(float);
           void mute();
           void volume(float);

           //void remove_effects();
           //void add_echo(unsigned int);
           //void add_filtre(unsigned int, unsigned int);

           void update();

private:
           FMOD_SYSTEM  *sys;
           FMOD_SOUND   *sound = NULL;
           FMOD_CHANNEL *channel;
           FMOD_RESULT  resultat;
           FMOD_DSP     *echo;
           FMOD_DSP     *filtre1;
           FMOD_DSP     *filtre2;
};

#endif // PLAYER_H
