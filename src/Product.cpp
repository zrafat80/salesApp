#include "Product.h"
#include <iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
istream&operator>>(istream&in,Product &p){
cout<<"Enter the id of product ";
in>>p.id;
cout<<"Enter the name of Product ";
cin.ignore();
getline(in,p.name);
cout<<"Enter the number of product ";
in>>p.number;
cout<<"Enter the price of product ";
in>>p.price;
cout<<"Enter the type of product ";
in>>p.type;
return in;
}
void Product::Update(){
cout<<"Enter the choice that you want to Update "<<endl;
cout<<"1 id"<<endl;
cout<<"2 name"<<endl;
cout<<"3 price"<<endl;
cout<<"4 type"<<endl;
cout<<"5 number"<<endl;
int a;
cin>>a;
switch (a){
case 1:
    cout<<"Enter the new id ";
    cin>>id;
    break;
    case 2:
      cout<<"Enter the new name ";
    cin>>name;
    break;
    case 3:
    cout<<"Enter the new price "<<endl;
    cin>>price;
    break;
    case 4:
        cout<<"Enter the new type ";
        cin>>type;
        break;
    case 5:
        cout<<"Enter the new Number ";
        cin>>number;
        break;
    default:
        break;

}
}
int Product::getid(){
return id;
}
fstream &operator<<(fstream&out,Product& p){
  out<<p.type<<setw(4)<<p.id<<setw(16)<<p.name<<'.'<<setw(5)<<p.price<<setw(5)<<p.number;
    return out;
    }
    void Product::file(int t_id,int t_type,string t_name,int t_price,string t_number){
    id=t_id;
    type=t_type;
    name=t_name;
    price=t_price;
    number =t_number;
}
ostream&operator<<(ostream&out,Product&p){
out<<"The id : "<<p.id<<",The Type : "<<p.type<<",The Name : "<<p.name<<",The Number : "<<p.number<<",The price : "<<p.price<<endl;
return out;
}
double Product::getprice(){
return price;
}
