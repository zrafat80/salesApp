#include "Date.h"
#include "Customers.h"
#include<fstream>
#include<bits/stdc++.h>
#include"Customer.h"
#include<iostream>
using namespace std;
void Date::read(){
cout<<"The day is ";
cin>>d;
cout<<"The month is ";
cin>>m;
cout<<"The Year is ";
cin>>y;
}

int Date::getd(){return d;}
int Date::getm(){return m;}
int Date::gety(){return y;}
fstream &operator<<(fstream&out,Date& d){
out<<setfill('0');
out<<setw(2)<<d.getd()<<"/"<<setw(2)<<d.getm()<<"/"<<d.gety()<<endl;
 return out;
    }

