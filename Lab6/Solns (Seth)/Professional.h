#include <string>
#include "Contact.h"

using std::string;

#ifndef PROFESSIONAL_H
#define PROFESSIONAL_H

class Professional : public Contact
{
private:
	string company;
	string position;
	string workNumber;
	
public:
	Professional();

	Professional(
		string first,
		string last,
		string cell,
		string workNumber,
		string company,
		string position
	);

	string getCompany();
	string getPosition();
	string getWorkNumber();

	void setPosition(string position);
	void setWorkNumber(string workNumber);
	void setCompany(string company);

};

#endif // PROFESSIONAL_H

