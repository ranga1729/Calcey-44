#include "libraries.h"
#include <string>
#pragma once

class Book
{
    protected:
        string title;
        string authorName;

    public:
        //constructor
        Book(string title, string authorName);

        //setters
        void set_title(string title);

        void set_authorName(string authorName);

        //getters
        string get_title();

        string get_authorName();

        //member functions
        virtual void printDescription();


};