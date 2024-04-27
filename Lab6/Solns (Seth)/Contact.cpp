#include "Contact.h"

Contact::Contact()
{
    first = "";
    last = "";
    cell = "";
}

// getters
string Contact::getFirst()
{
    return first;
}

string Contact::getLast()
{
    return last;
}

string Contact::getCell()
{
    return cell;
}

// setters
void Contact::setFirst(string first)
{
    first = first;
}

void Contact::setLast(string last)
{
    last = last;
}

void Contact::setCell(string cell)
{
    this->cell = cell;
}
