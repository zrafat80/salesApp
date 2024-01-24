#include "Person.h"
#include <iostream>
using namespace std;
void Person::read(){
    cin.ignore();
cout<<"Enter The Full Name ";
getline(cin,Full_name);

cout<<"Enter The Billing Address ";
getline(cin,Billing_address);

}
void Person::edit(){
cout<<"Enter the choice that You want to Edit"<<endl;
cout<<"1 id"<<endl;
cout<<"2 phone"<<endl;
cout<<"3 Full Name"<<endl;
cout<<"4 billing Address"<<endl;
}
void Person::Set(){
cout<<"Enter the new Billing Address ";
getline(cin,Billing_address);
}
void Person::setname(){
cout<<"Enter the new name ";
getline(cin,Full_name);
}
string Person::getname(){
return Full_name;
}
string Person::Get(){return Billing_address;}
 void Person::set_name(string t){Full_name=t;}
 void Person::set_loc(string t){Billing_address=t;}
