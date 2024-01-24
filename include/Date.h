#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
class Date
{
int d,m,y;
public:
    void read();
    int getd();
    int getm();
    int gety();
    friend fstream &operator<<(fstream&out,Date& d);
};

#endif // DATE_H
