#include "player.h"

Player::Player()
{
    FMOD_System_Create(&sys);
    FMOD_System_Init(sys,1,FMOD_INIT_NORMAL,NULL);
}

Player::~Player()
{
    FMOD_System_Release(sys);
    FMOD_Sound_Release(sound);
}



// pour lire un morceau
int Player::play(const string &filename)
{

    resultat = FMOD_System_CreateStream(sys,filename.c_str(),FMOD_HARDWARE | FMOD_LOOP_OFF | FMOD_2D,0,&sound);
    FMOD_System_PlaySound(sys,FMOD_CHANNEL_FREE,sound,0,&channel);

    /* On vérifie si elle a bien été ouverte (IMPORTANT) */
    if (resultat != FMOD_OK)
    {
        return -1;
    }
    else
    {
       return 0;
    }

}



// mettre en pause un canal
int Player::pause()
{
    FMOD_Channel_SetPaused(channel, true);
    return 1;
}

int Player::resume()
{
    FMOD_Channel_SetPaused(channel, false);
    return 0;
}


//récupérer le nom de l'artiste du morceau courant
string Player::getArtist(){
    FMOD_TAG         tag;
    FMOD_Sound_GetTag(sound, "ARTIST", 0, &tag);
    string s((char*)tag.data);

    return s;
}


//récupérer le titre du morceau courant
string Player::getTitle(){
    FMOD_TAG         tag;
    FMOD_Sound_GetTag(sound, "TITLE", 0, &tag);
    string s((char*)tag.data);

    return s;
}


//récupérer la durée du morceau courant
unsigned int Player::getLength(){
    unsigned int i;
    FMOD_Sound_GetLength(sound, &i, FMOD_TIMEUNIT_MS  );
    return i;
}

void Player::mute()
{
                           FMOD_CHANNELGROUP *canalgroup;
                           FMOD_BOOL mute;
                           FMOD_System_GetMasterChannelGroup(sys, &canalgroup);
                           resultat = FMOD_ChannelGroup_GetMute(canalgroup, &mute);

                           if(mute)
                           {
                               resultat = FMOD_ChannelGroup_SetMute(canalgroup, 0);
                               mute = 0;
                           }
                           else
                           {
                               resultat = FMOD_ChannelGroup_SetMute(canalgroup, 1);
                               mute = 1;
                           }
}
