#include "playlist.h"

// constructor and destructor (given to you)
Playlist::Playlist()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}

Playlist::~Playlist()
{
    if(size > 0)
    {
        Node *temp;

        while(head != nullptr)
        {
            // grabs the node after the head
            temp = head->next;

            // deletes the head
            delete head;

            // reassigns the head
            head = temp;
        }
    }
}

// display and add functions (given to you)
void Playlist::display()
{
    // starts temporary Node at the beginning (head)
    Node *temp = head;

    while(temp != nullptr)
    {
        // displays information
        cout << temp->title << " - " << temp->artist << endl;

        // moves the temp node to the next node in the sequence
        temp = temp->next;
    }
}

void Playlist::append(string title, string artist)
{
    // if the list is currently empty
    if(size == 0)
    {
        // create a new node at the head
        // with the information brought in
        head = new Node;

        head->title = title;
        head->artist = artist;
        head->next = nullptr;

        // assigns tail to the head
        tail = head;
    }

    // otherwise, if it's not empty
    else
    {
        // creates a new node
        // with the information brought in
        Node *temp = new Node;

        temp->title = title;
        temp->artist = artist;
        temp->next = nullptr;

        // point current tail to new node
        tail->next = temp;

        // make new node the new tail
        tail = temp;
    }

    size++;
}

void Playlist::shuffle()
{
    // seeds random number
    srand(time(NULL));

    for(int i = 0; i < size; i++)
    {
        int num = rand() % size;

        // swaps current "index" with random "index"

        // gets node at current position
        Node *current = head;
        for(int j = 0; j < i; j++)
        {
            current = current->next;
        }

        // gets node at random position
        Node *random = head;
        for(int j = 0; j < num; j++)
        {
            random = random->next;
        }

        // stores the current Node's information
        string tempTitle = current->title;
        string tempArtist = current->artist;

        // reassigns the random Node's information to the current
        current->title = random->title;
        current->artist = random->artist;

        // and the stored current information to the random Node
        random->title = tempTitle;
        random->artist = tempArtist;
    }
}

// ****************************************************************
// ** you should make **
// all of these should work on a TITLE of the song basis
// ****************************************************************

int Playlist::binarySearch(string title)
{

}

// algorithm of choice:
// any links to resources to make it work:
void Playlist::sort()
{

}

// algorithm of choice:
// any links to resources to make it work:
void Playlist::reverseSort()
{

}


// ****************************************************************
// ****************************************************************


// HONORS / BONUS credit
// optional unless you're honors
// if not implementing, just leave it here
void Playlist::sortByArtist()
{

}
