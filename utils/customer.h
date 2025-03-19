#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
using namespace std;

struct address {
	string street;
	string city;
	string zip_code;
};

struct customer {
	int id;
	string name;
	string email;
	address customer_address;
};

#endif //CUSTOMER_H
