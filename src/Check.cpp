#include "Check.h"
#include<iostream>
#include<fstream>
using namespace std;
void Check::pay(){
cout<<"Enter the name : ";
cin.ignore();
getline(cin,name);
cout<<"Enter the Bank id : ";
cin>>bank_id;
}
fstream &operator<<(fstream&out,Check& c){
out<<"The Payment Method : Check"<<endl;
out<<"The Name : "<<c.name<<",The Bank id : "<<c.bank_id<<endl;
}
