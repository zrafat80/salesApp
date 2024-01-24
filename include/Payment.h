#ifndef PAYMENT_H
#define PAYMENT_H
#include"Date.h"
#include<fstream>
class Payment
{
 private:
     Date paid_date;
     double amount;
     string pay_method;
     Payment* p;
 public:
     friend fstream &operator<<(fstream&out,Payment& p);
    virtual void pay();
    int Add_payment();
};

#endif // PAYMENT_H
