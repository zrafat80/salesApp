#include "Credit.h"
#include<iostream>
#include<fstream>
using namespace std;
void Credit::pay(){
cout<<"Enter the Number of Credit : ";
cin>>number;
cout<<"Enter the expired date"<<endl;
expireDate.read();
cout<<"Enter the Type of credit : ";
cin.ignore();
getline(cin,type);
}
fstream &operator<<(fstream&out,Credit &c){
out<<"The Payment Method : Credit"<<endl;
out<<"The Number of credit : "<<c.number<<",The Expired date : ";
out<<c.expireDate;
out<<",The type of credit : "<<c.type<<endl;
}
