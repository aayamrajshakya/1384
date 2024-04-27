#include <string>
#include "Contact.h"

using std::string;

#ifndef PERSONAL_H
#define PERSONAL_H

class Personal : public Contact
{
private:
	string birthday;
	string address;
	string city;
	string state;
	string zip;

public:
	Personal();

	Personal(
		string first,
		string last,
		string cell,
		string birthday,
		string address,
		string city,
		string state,
		string zip
	);

	string getBirthday();
	string getAddress();
	string getCity();
	string getState();
	string getZip();

	void setBirthday(string birthday);
	void setFullAddress(
		string address,
		string city,
		string state,
		string zip
		);
};

#endif // PERSONAL_H