#ifndef TRANSACTION_H
#define TRANSACTION_H
#include"Order.h"
#include"Date.h"
#include"Payment.h"
#include<fstream>
class Transaction
{
   private:
       int id;
       Date date;
       Order* o;
       Payment P;

   public:
       friend fstream &operator<<(fstream&out,Transaction& t);
    int Add_Transaction();
    int get_id();
};

#endif // TRANSACTION_H
