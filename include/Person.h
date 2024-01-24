#ifndef PERSON_H
#define PERSON_H
#include"Customer.h"

class Person:public Customer
{
string Billing_address;
string Full_name;
public:
    void read();
    void edit();
    void Set();
    void setname();
    string  getname();
 string Get();
 void set_name(string );
 void set_loc(string);
};

#endif // PERSON_H
