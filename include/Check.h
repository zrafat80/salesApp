#ifndef CHECK_H
#define CHECK_H
#include"Payment.h"
#include<iostream>
#include<fstream>
using namespace std;
class Check:public Payment
{
    private:
    string name;
    string bank_id;
    public:
        void pay();
        friend fstream &operator<<(fstream&out,Check& c);
};

#endif // CHECK_H
