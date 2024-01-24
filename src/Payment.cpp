#include "Payment.h"
#include<iostream>
#include"Cash.h"
#include"Check.h"
#include"Credit.h"
using namespace std;

void Payment::pay(){}
int Payment::Add_payment(){
cout<<"Enter the amount of payment : ";
cin>>amount;
cout<<"Enter the paid date "<<endl;
paid_date.read();
int c;
cout<<"Choice Payment Method"<<endl;
cout<<"1. Cash"<<endl<<"2. Credit"<<endl<<"3. Check"<<endl;
cin>>c;
if(c==1){p=new Cash;
pay_method="Cash";}
else if(c==2){p=new Credit;
pay_method="Credit";}
else if(c==3){p=new Check;
pay_method="Check";}
else {
    cout<<"Invaild Choice";
    return 0;
}
p->pay();
return 1;
}
fstream &operator<<(fstream&out,Payment& p){
out<<"The payment Method : "<<p.pay_method<<endl;
}
