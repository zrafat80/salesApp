#include "Order.h"
#include"Date.h"
#include"Customers.h"
#include<iostream>
#include"Customer.h"
#include"Orderitem.h"
#include<bits/stdc++.h>
using namespace std;
Customer e;

Order::Order(){
total=0;
os=status::NEW;
}
int Order::Create_order(){
    cout<<"Enter the id of Order : ";
    cin>>id;
    cout<<"Enter the number of order : ";
    cin>>number;
    cout<<"Enter the date of Order"<<endl;
    date.read();

int id_Customer;
cout<<"Enter the id of customer : ";
cin>>id_Customer;
if(C.search_Customer(id_Customer)!=-1){
   e= C.get_Customer(C.search_Customer(id_Customer));
   cust=&e;
}
else {
    cout<<"Invaild id"<<endl;
    cout<<"please Try Again"<<endl;
    return 0;
}
int n;
cout<<"Enter the Numbers of order items that you want to sell : ";
cin>>n;
while(n){
    Orderitem o;
    o.Add_OrderItem();
    if(o.get_flag()){
            total+=o.get_price();
        OI.push_back(o);
        n--;
    }
    else{
        cout<<"There is Error(id or quantity)"<<endl;
        cout<<"Please Try Again"<<endl;
    }
}
return 1;
}
void Order::Update_status(){
cout<<"1. NEW"<<endl;
cout<<"2. HOLD"<<endl;
cout<<"3. PAID"<<endl;
cout<<"4. CANCELED"<<endl;
int OS;
cin>>OS;
if(OS==1)os=status::NEW;
else if(OS==2)os=status::HOLD;
else if(OS==3)os=status::PAID;
else if(OS==4)os=status::CANCELED;
else cout<<"Invaild Choice<please try Again>"<<endl;
if(OS>=1&&OS<=4)cout<<"UPDATED~"<<endl;
}
int Order::get_id(){
    return id;
}
void Order::Update_quantity(){
    int n;
    cout<<OI.size()<<endl;
for(int i=0;i<OI.size();i++){
    cout<<i+1<<". "<<"id : "<<OI[i].get_id()<<","<<"quantity : "<<OI[i].get_quantity();
    cout<<","<<"price : "<<OI[i].get_price()<<endl;
}
cin>>n;
    if(n>=1&&n<=OI.size()){
            int c;
        cout<<"1. increase quantity by 1"<<endl;
        cout<<"2. decrease quantity by 1"<<endl;
        cout<<"3. increase quantity by N"<<endl;
        cout<<"4. decrease quantity by N"<<endl;
    cin>>c;
        switch(c){
    case 1:
        if(OI[n-1].search_in_stock(OI[n-1].get_id(),1)){
            ++OI[n-1];
        }
        else {
            cout<<"There is Error in id or quantity"<<endl;
            cout<<"please try again"<<endl;
        }
        break;
    case 2:
         if(OI[n-1].search_in_stock(OI[n-1].get_id(),-1)){
            --OI[n-1];
        }
        else {
            cout<<"There is Error in id or quantity"<<endl;
            cout<<"please try again"<<endl;
        }
        break;
    case 3:
        int q;
        cout<<"Enter n : ";
        cin>>q;
           if(OI[n-1].search_in_stock(OI[n-1].get_id(),q)){
            OI[n-1]+=q;
        }
        else {
            cout<<"There is Error in id or quantity"<<endl;
            cout<<"please try again"<<endl;
        }
        break;
    case 4:
            int Q;
        cout<<"Enter n : ";
        cin>>Q;
           if(OI[n-1].search_in_stock(OI[n-1].get_id(),-Q)){
            OI[n-1]-=Q;
        }
        else {
            cout<<"There is Error in id or quantity"<<endl;
            cout<<"please try again"<<endl;
        }
        break;
    default:
        cout<<"Invild choice"<<endl;
        break;
        }

    }
}

fstream &operator<<(fstream &out,Order &o){

out<<"The id of Customer is : "<<o.cust->getid()<<endl;
out<<"id of order : "<<o.id<<","<<"Number of order : "<<o.number<<","<<"The Total of Price : "<<o.total<<","<<"The Status of Order : "<<o.get_status()<<endl;
out<<"The date of order : ";
out<<o.date;
out<<"  The Order item list   "<<endl;
for(int i=0;i<o.OI.size();i++){
        out<<i+1<<".  ";
out<<o.OI[i];
}
return out;
    }
string Order::get_status(){
      if(os==status::NEW)return "NEW";
      else if(os==status::HOLD)return "HOLD";
      else if(os==status::PAID)return "PAID";
      else return "CANCELED";
      }
double Order::get_total_profit(){
return total;
}
