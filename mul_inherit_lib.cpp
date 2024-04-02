#include <iostream>
using namespace std;

class Book {
protected:
    string title;
    string author;
    int year;
public:
    void set_book_details() {
        cout << "Enter title, author, and year of publication: ";
        cin >> title >> author >> year;
    }
};

class Library {
protected:
    int bookId;
    string section;
public:
    void set_library_details() {
        cout << "Enter book ID and section: ";
        cin >> bookId >> section;
    }
};

class BookInfo : public Book, public Library {
    int copies;
public:
    void set_book_info() {
        cout << "Enter number of copies available: ";
        cin >> copies;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year of publication: " << year << endl;
        cout << "Book ID: " << bookId << endl;
        cout << "Section: " << section << endl;
        cout << "Number of copies available: " << copies << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;
    
    BookInfo books[20];
    for (int i = 0; i < n; i++) {
        cout << "Enter details for book " << i + 1 << ":" << endl;
        books[i].set_book_details();
        books[i].set_library_details();
        books[i].set_book_info();
    }

    cout << "\nDisplaying book information:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << ":\n";
        books[i].display();
    }

    return 0;
}

