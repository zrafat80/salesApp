#ifndef CREDIT_H
#define CREDIT_H
#include"Payment.h"
#include<iostream>
#include<fstream>
using namespace std;
class Credit : public Payment
{
    private:
  string type;
  string number;
  Date expireDate;
  public:
      void pay();
      friend fstream &operator<<(fstream&out,Credit &c);
};

#endif // CREDIT_H
