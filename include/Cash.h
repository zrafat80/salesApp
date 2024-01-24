#ifndef CASH_H
#define CASH_H
#include"Payment.h"
#include<iostream>
#include<fstream>
using namespace std;
class Cash:public Payment
{
double cash_value;
public:
    void pay();
    friend fstream &operator<<(fstream&out,Cash& c);
};

#endif // CASH_H
