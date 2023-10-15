#include "libraries.h"
#include "Book.h"
#include "AudioBook.h"

class BookShop
{
    protected:
        int noOfBooksAdded;
        Book* bookCollection[10];

    public:

        BookShop();

        void addBook(Book* book);

        void addBook(AudioBook* audioBook);

        int get_number();

        ~BookShop();
};