#include "Company.h"

void Company::read(){
    cin.ignore();
cout<<"Enter the Name of Company ";
getline(cin,Name);
cout<<"Enter The location of Company ";
getline(cin,location);
}
void Company::edit(){

cout<<"Enter the choice that You want to Edit"<<endl;
cout<<"1 id"<<endl;
cout<<"2 phone"<<endl;
cout<<"3 Name of Company"<<endl;
cout<<"4 location of Company"<<endl;

}
void Company::Set(){
cout<<"Enter the New location ";
getline(cin,location);
}
void Company::setname(){
cout<<"Enter the new name ";
cin.ignore();
getline(cin,Name);
}
string Company::getname(){
return Name;
}
string Company::Get(){return location;}
 void Company::set_name(string t){Name=t;}
 void Company::set_loc(string t){location=t;}
