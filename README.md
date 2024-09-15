
## Library Management System

This project implements a simple library management system using basic concepts of Object-Oriented Programming (OOP) in C++. It allows users to add, remove, and display books in a library by interacting with the system through a console menu.

## Overview

The program is built with two main classes:

- **Book**: Represents a single book with attributes like `title`, `author`, and `ISBN`.
- **Library**: Manages a collection of books and provides functions to add, remove, and display books.

## Classes

### 1. `Book` Class

This class represents an individual book. Each book has a `title`, `author`, and `ISBN`.

#### Constructor
```cpp
Book(string title, string author, string isbn);
```
The constructor initializes a book object with the following parameters:
- `title`: The title of the book.
- `author`: The name of the author.
- `isbn`: A unique identifier (International Standard Book Number).

#### Getters
The class provides getter functions to access the private members:
- `get_title() const`: Returns the book's title.
- `get_author() const`: Returns the book's author.
- `get_isbn() const`: Returns the book's ISBN.

#### `display_book()` Method
```cpp
void display_book() const;
```
This method prints the details of the book (title, author, and ISBN) to the console. It is marked as `const`, meaning it does not modify the state of the book object.

#### Destructor
The class relies on the default destructor provided by C++ since there are no dynamically allocated resources that need explicit cleanup.

### 2. `Library` Class

This class manages a collection of books. It provides functionalities to add, remove, and display books.

#### Private Data Members
- `vector<Book> books`: A vector that stores a collection of `Book` objects.

#### Constructor
The default constructor is used to initialize an empty library.

#### `add_book()` Method
```cpp
void add_book(Book book);
```
This method adds a `Book` object to the library's `books` vector.

#### `remove_book()` Method
```cpp
void remove_book(string isbn);
```
This method removes a book from the library by matching the provided `ISBN`. If a book with the specified `ISBN` is found, it is removed from the `books` vector; otherwise, a message is displayed indicating that the book was not found.

#### `display_books()` Method
```cpp
void display_books() const;
```
This method displays the details of all books in the library. It iterates through the `books` vector and calls the `display_book()` method of each book.

#### Destructor
Similar to the `Book` class, the `Library` class uses the default destructor, as there are no dynamically allocated resources that need manual cleanup.

## How the Program Works

### Main Menu

When you run the program, it presents a menu with four options:
1. **Add a book**: The user is prompted to enter the book's `title`, `author`, and `ISBN`. The book is then added to the library.
2. **Remove a book**: The user is prompted to enter the `ISBN` of the book to be removed. The system searches for the book by its `ISBN` and removes it if found.
3. **Display all books**: The program displays all the books currently in the library, showing their `title`, `author`, and `ISBN`.
4. **Exit**: Exits the program.

The program will keep running until the user selects the **Exit** option.

### Example Usage

```
Library Menu: 
1. Add a book
2. Remove a book
3. Display all books
4. Exit
Enter your choice: 1
Enter book title: The Catcher in the Rye
Enter book author: J.D. Salinger
Enter book ISBN: 9780316769488
Book added successfully!

Library Menu: 
1. Add a book
2. Remove a book
3. Display all books
4. Exit
Enter your choice: 3

Books in the library:
Title: The Catcher in the Rye, Author: J.D. Salinger, ISBN: 9780316769488

## Conclusion

This project demonstrates basic concepts of object-oriented programming in C++, such as classes, encapsulation, constructors, and methods. It also shows how to manage collections using the C++ Standard Library (`std::vector`).
