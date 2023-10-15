#include "Book.h"

Book::Book(string title, string authorName)
{
    this -> title = title;
    this -> authorName = authorName;
}

void Book::set_title(string title)
{
    this -> title = title;
}

void Book::set_authorName(string authorName)
{
    this -> authorName = authorName;
}

string Book::get_title()
{
    return title;
}

string Book::get_authorName()
{
    return authorName;
}

void Book:: printDescription()
{
    cout << "Title: " << title << endl;
    cout << "Author: " << authorName << endl;
}