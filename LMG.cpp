#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;

public:
    Book(string title, string author, string isbn) {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
    }
    string get_title() const {
        return title;
    }

    string get_author() const {
        return author;
    }

    string get_isbn() const {
        return isbn;
    }
    void display_book() const {
        cout << "Title: " << title << ", Author: " << author << ", ISBN: " << isbn << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void add_book(Book book) {
        books.push_back(book);
    }
    void remove_book(string isbn) {
        for (auto it = books.begin(); it != books.end(); ++it) {
            if (it->get_isbn() == isbn) {
                books.erase(it);
                cout << "Book with ISBN " << isbn << " has been removed." << endl;
                return;
            }
        }
        cout << "Book with ISBN " << isbn << " not found." << endl;
    }

    void display_books() const {
        if (books.empty()) {
            cout << "The library is empty." << endl;
        } else {
            for (const auto& book : books) {
                book.display_book(); 
            }
        }
    }
};

int main() {
    Library library;
    int choice;

    do {
        cout << "\nLibrary Menu: " << endl;
        cout << "1. Add a book" << endl;
        cout << "2. Remove a book" << endl;
        cout << "3. Display all books" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        if (choice == 1) {
            string title, author, isbn;

            cout << "Enter book title: ";
            getline(cin, title);
            cout << "Enter book author: ";
            getline(cin, author);
            cout << "Enter book ISBN: ";
            getline(cin, isbn);

            library.add_book(Book(title, author, isbn));
            cout << "Book added successfully!" << endl;

        } else if (choice == 2) {
            string isbn;

            cout << "Enter the ISBN of the book to remove: ";
            getline(cin, isbn);

            library.remove_book(isbn);

        } else if (choice == 3) {

            cout << "\nBooks in the library:" << endl;
            library.display_books();
        }

    } while (choice != 4);

    cout << "Exiting the program." << endl;
    return 0;
}
