#include "Professional.h"

Professional::Professional()
{
    company = "";
    position = "";
    workNumber = "";
}

string Professional::getCompany()
{
    return company;
}

string Professional::getPosition()
{
    return position;
}

string Professional::getWorkNumber()
{
    return workNumber;
}

void Professional::setPosition(string position)
{
    position = position;
}

void Professional::setWorkNumber(string workNumber)
{
    workNumber = workNumber;
}

void Professional::setCompany(string company)
{
    company = company;
}