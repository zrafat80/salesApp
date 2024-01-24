#include "Transaction.h"
#include<iostream>
#include<fstream>
#include"Orders.h"
using namespace std;
Orders O;

int Transaction::Add_Transaction(){
cout<<"Enter the id of Transaction : ";
cin>>id;
int o_id;
cout<<"Enter the id of Order : ";
cin>>o_id;
if(O.find_order(o_id)!=-1){
  o=(O.get_order(O.find_order(o_id)));
}
else {
    cout<<"Ivaild id <please try again> "<<endl;
    return 0;
}
if(!(P.Add_payment()))return 0;
return 1;

}
int Transaction::get_id(){return id;}
fstream &operator<<(fstream &out,Transaction &t){
out<<"The id of Transaction : "<<t.id<<endl;
out<<*(t.o)<<endl;
out<<t.P;
return out;
}
