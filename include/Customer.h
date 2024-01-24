#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Customer.h"
#include <iostream>
#include<fstream>
using namespace std;

class Customer
{
private:
    int id;
    int type;
   string phone;
Customer* cust;
public:
    friend istream &operator>>(istream&in,Customer& c);
     friend ostream &operator<<(ostream&out,Customer& c);
    friend fstream &operator<<(fstream&out,Customer& c);
virtual void read();
int getid();
virtual void edit();
virtual void setname();
virtual void Set();
virtual void set_name(string );
virtual void set_loc(string );
virtual string  getname();
virtual string Get();
string get_phone(){
return phone;
}
void file(int ,int, string ,string ,string);
};

#endif // CUSTOMER_H
