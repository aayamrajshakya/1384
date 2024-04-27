#include <iostream>

// class includes
#include "personal.h"
#include "professional.h"

using std::cout;
using std::endl;

int main()
{
    // testing zero constructor and setters
    Personal pers1;
    Professional pro1;

    // tests personal object...
    pers1.setFirst("John");
    pers1.setLast("Lennon");
    pers1.setCell("555-555-5555");
    pers1.setBirthday("October 9, 1940");
    pers1.setFullAddress("A Place", "Actually England", "EN", "12345");

    // tests professional object...
    pro1.setFirst("Paul");
    pro1.setLast("McCartney");
    pro1.setCell("444-444-4444");
    pro1.setCompany("Wings");
    pro1.setPosition("Vocals");
    pro1.setWorkNumber("123-456-7890");

    // testing constructor with parameters

    // tests personal object
    Personal pers2("Ringo", "Star", "456-123-7890", "July 7, 1940", "Something Road", "Certainly the UK", "UK", "42572");

    // tests professional object
    Professional pro2("George", "Harrison", "789-654-4321", "901-345-9521", "The Beatles", "Guitarist");


    // testing getters
    cout << "Personal 1: " << endl;
    cout << pers1.getFirst() << " " << pers1.getLast() << endl;
    cout << "Cell: " << pers1.getCell() << endl;
    cout << "Address: " << endl;
    cout << pers1.getAddress() << endl;
    cout << pers1.getCity() << ", " << pers1.getState() << " " << pers1.getZip() << endl;
    cout << "Birthday: " << pers1.getBirthday() << endl;

    cout << endl << "Personal 2: " << endl;
    cout << pers2.getFirst() << " " << pers2.getLast() << endl;
    cout << "Cell: " << pers2.getCell() << endl;
    cout << "Address: " << endl;
    cout << pers2.getAddress() << endl;
    cout << pers2.getCity() << ", " << pers2.getState() << " " << pers2.getZip() << endl;
    cout << "Birthday: " << pers2.getBirthday() << endl;

    cout << endl << "Professional 1: " << endl;
    cout << pro1.getFirst() << " " << pro1.getLast() << endl;
    cout << "Cell: " << pro1.getCell() << endl;
    cout << "Work: " << pro1.getWorkNumber() << endl;
    cout << "Company: " << pro1.getCompany() << endl;
    cout << "Position: " << pro1.getPosition() << endl;

    cout << endl << "Professional 2: " << endl;
    cout << pro2.getFirst() << " " << pro2.getLast() << endl;
    cout << "Cell: " << pro2.getCell() << endl;
    cout << "Work: " << pro2.getWorkNumber() << endl;
    cout << "Company: " << pro2.getCompany() << endl;
    cout << "Position: " << pro2.getPosition() << endl;

    return 0;
}
