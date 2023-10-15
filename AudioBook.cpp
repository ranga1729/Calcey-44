#include "AudioBook.h"

AudioBook::AudioBook(string title, string authorName, string voiceActor):Book(title, authorName)
{
    this -> voiceActor = voiceActor;
}

void AudioBook::set_voiceActor(string voiceActor)
{
    this -> voiceActor = voiceActor;
}

string AudioBook::get_voiceActor()
{
    return voiceActor;
}

void AudioBook::printDescription() 
{
    cout << "Title:  " << title << endl;
    cout << "Author: " << authorName << endl;
    cout << "Voice Actor: " << voiceActor << endl;
}