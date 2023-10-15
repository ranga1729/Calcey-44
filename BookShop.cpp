#include "BookShop.h"


BookShop::BookShop()
{

}

void BookShop::addBook(Book *book)
{
    this -> bookCollection[0] = book;
    this -> noOfBooksAdded++;
}

void BookShop::addBook(AudioBook* audioBook)
{
    this -> bookCollection[0] = audioBook;
    this -> noOfBooksAdded++;
}

BookShop::~BookShop()
{
    cout << "Book Shop Closing" << endl;
}

int BookShop::get_number()
{
    return noOfBooksAdded;
}