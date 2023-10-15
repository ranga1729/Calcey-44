#include "libraries.h"
#include "BookShop.h"
#include "AudioBook.h"
#include "Book.h"

int main()
{
    BookShop shop1;

    int count;
    cout << "Enter number of Books/Audio Books you plan to add: ";
    cin >> count;

    for (int i=0; i< count; i++)
    {
        //should be in a while loop to make the user to input either 1 or 2.
        int choice;
        do
        {
            cout << "To add a Book(Press 1)" << endl;
            cout << "To add a Audio Book(Press 2)" << endl;
            cin >> choice;
        } while(choice>2 || choice<1);

        cout << endl;
        
        if (choice == 1)
        {
            string book_title;
            string book_author;

            cout << "Enter Book title: ";
            cin >> book_title;
            cout << "Enter Book author: ";
            cin >> book_author;

            //creating a book object and ssign values
            Book book1(book_title, book_author);

            //adding the book object pointer to the shop's array.
            shop1.addBook(&book1);

            cout << endl;
            cout << "Book added to the collection successfully." << endl;
            cout << endl;

            //calling book object's member
            book1.printDescription();
        }
        else if (choice == 2)
        {
            string audb_title;
            string audb_author;
            string audb_voiceActor;

            cout << "Enter AudioBook title: ";
            cin >> audb_title;
            cout << "Enter AudioBook author: ";
            cin >> audb_author;
            cout << "Enter AudioBook Voice Actor: ";
            cin >> audb_voiceActor;

            AudioBook audioBook1(audb_title, audb_author, audb_voiceActor);

            shop1.addBook(&audioBook1);
            //BookShop.noOfBooksAdded++;

            cout << endl;
            cout << "Book added to the collection successfully." << endl;
            cout << endl;

            audioBook1.printDescription();
        }
    }

    cout << "Totally " << shop1.get_number() << " book added to the shop." << endl;
    

}