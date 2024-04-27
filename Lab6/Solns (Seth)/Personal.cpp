#include "Personal.h"

Personal::Personal()
{
    birthday = "";
    address = "";
    city = "";
    state = "";
    zip = "";
}

string Personal::getBirthday()
{
    return birthday;
}

string Personal::getAddress()
{
    return address;
}

string Personal::getCity()
{
    return city;
}

string Personal::getState()
{
    return state;
}

string Personal::getZip()
{
    return zip;
}


void Personal::setBirthday(string birthday)
{
    birthday = birthday;
}

void Personal::setFullAddress(string address, string city, string state, string zip)
{
    address = address;
    city = city;
    state = state;
    zip = zip;
}