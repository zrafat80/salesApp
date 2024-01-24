#ifndef COMPANY_H
#define COMPANY_H
#include"Customer.h"

class Company:public Customer
{
  private:
      string Name;
      string location;
      void read();
      void edit();
      void setname();
      void Set();
      string  getname();
 string Get();
  void set_name(string );
 void set_loc(string );

};

#endif // COMPANY_H
