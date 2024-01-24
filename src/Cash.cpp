#include "Cash.h"
#include<iostream>
#include<fstream>
using namespace std;
void  Cash::pay(){
cout<<"Enter the Cash value : ";
cin>>cash_value;
}
fstream &operator<<(fstream&out,Cash& c){
out<<"The payment Method is : Cash"<<endl;
out<<"The Cash Value : "<<c.cash_value<<endl;
return out;
}
