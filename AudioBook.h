#include "Book.h"
#pragma once

class AudioBook:public Book
{
    protected:
        string voiceActor;

    public:
        //constructor
        AudioBook(string title, string authorName, string voiceActor);

        //setters
        void set_voiceActor(string voiceActor);

        //getters
        string get_voiceActor();

        //modified printDescription()
        void printDescription() override;

};