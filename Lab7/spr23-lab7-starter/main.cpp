#include <iostream>
#include <string>
#include <fstream>
#include "linkedlist.h"

using namespace std;

int main()
{
    // creates a linked list
    LinkedList library;

    // attempts to create and open the file to read
    // initializes the starting place
    ifstream infile;
    infile.open("books.txt");

    // if it isn't there...
    // end program
    if(!infile.is_open())
    {
        cout << "Couldn't locate file -- ending program." << endl;
        return 1;
    }

    // otherwise, read file
    string title, author;

    // stores title
    while(getline(infile, title))
    {
        // stores author
        getline(infile, author);

        // adds to linked list
        library.append(title, author);
    }

    // closes file
    infile.close();

    // displays intial setup:
    library.display();



    // tests a couple of error messages:
    cout << endl << "Error checking: " << endl;
    library.remove(-1);
    library.remove(7);
    library.insert("Test", "Test", -20);
    library.insert("Test", "Test", 8);
    library.view(-1);
    library.view(8);
    cout << endl;



    // tests a couple VALID inserts
    library.insert("I, Robot", "Isaac Asimov", 7);          // tail insert
    library.insert("Brave New World", "Aldous Huxley", 0);  // head insert
    library.insert("Animal Farm", "George Orwell", 5);

    cout << "Display after inserts: " << endl;
    library.display();



    // tests a couple VALID removes
    library.remove(0);  // head remove
    library.remove(8);  // tail remove
    library.remove(7);  // tail remove
    library.remove(3);

    cout << endl << "Display after removes: " << endl;
    library.display();

    // run a pop and append to make sure the tail is still accounted for
    library.pop();
    library.append("Frankenstein", "Mary Shelley");

    cout << endl << "Display after a pop and append:" << endl;
    library.display();


    // view that works
    cout << endl << "Viewing a specific book: " << endl;
    library.view(3);
    cout << endl;


    // loops until linked list is cleared
    int num = library.pop();

    while(num == 0)
    {
        num = library.pop();
    }


    // attempts to display
    cout << endl << "Display attempt after empty:" << endl;
    library.display();


    return 0;
}
