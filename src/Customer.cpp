#include "Customer.h"
#include <iostream>
#include<bits/stdc++.h>
#include<fstream>
#include"Person.h"
#include"Company.h"
using namespace std;
int p;

  istream &operator>>(istream&in,Customer& c){
    cout<<"Enter the id of customer ";
    in>>c.id;
    cout<<"Enter the phone of customer ";
    in>>c.phone;
    cout<<"Enter the type of Customer"<<endl;
    cout<<"1 Person"<<endl;
    cout<<"2 Company"<<endl;
    cin>>c.type;
    if(c.type==1){
        c.cust=new Person;
    }
    else if(c.type==2){
        c.cust =new Company;
    }
    else cout<<"Invaild choice"<<endl;
    c.cust->read();
    }
void Customer::read(){

}
int Customer::getid(){
return id;
}
void Customer::setname(){}
void Customer::Set(){}
void Customer::edit(){
    cust->edit();
int a;
cin>>a;
switch(a){
case 1:
    cout<<"Enter The New id ";
    cin>>id;
    break;
case 2:
    cout<<"Enter the New phone ";
    cin>>phone;
    break;
case 4:
    cust->Set();
    break;
case 3:
    cust->setname();
    break;
default :
    break;

}
}


fstream &operator<<(fstream&out,Customer& c){
  out<<c.type<<" "<<setw(3)<<c.id<<setw(12)<<c.phone<<'.'<<setw(12)<<c.cust->getname()<<'.'<<setw(12)<<c.cust->Get()<<'.'<<endl;
    return out;
    }
string Customer::getname(){}
string Customer::Get(){}

void Customer::file(int q,int t_id,string t_phone,string t_name,string t_loc){
        type=q;

        if(type==1){
        cust=new Person;
    }
    else if(type==2){
        cust =new Company;
    }
id=t_id;
phone=t_phone;

cust->set_name(t_name);

cust->set_loc(t_loc);
}
  void Customer::set_name(string ){}
 void Customer::set_loc(string ){}
ostream &operator<<(ostream&out,Customer& c){
out<<"The id : "<<c.id<<",The Phone : "<<c.phone<<",The name : "<<c.cust->getname()<<",The Address : "<<c.cust->Get()<<endl;
return out;
}
