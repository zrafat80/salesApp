#ifndef CUSTOMERS_H
#define CUSTOMERS_H
#include"Customer.h"

class Customers
{
 public:
     void AddnewCustomer();
     void DeleteCustomer();
     void EditCustomer();
     void FileCustomer();
     void read_file();
      int  search_Customer(int );
Customer get_Customer(int);
void print ();
};

#endif // CUSTOMERS_H
