#include "Orderitem.h"
#include"Stock.h"
#include"Products.h"
#include<iostream>
#include<fstream>
using namespace std;
Stock s;
Products P;
void Orderitem::Add_OrderItem(){

cout<<"Enter the id of product that you want to sell ";
cin>>id;
cout<<"Enter the quantity of this product ";
cin>>quantity;
cout<<"Enter the Price ";
cin>>price;
flag=s.find_product(id,quantity);
}
int Orderitem::get_flag(){
return flag;
}
double Orderitem::get_price(){return (price*quantity)-(quantity*P.getprice(id));}
int Orderitem::get_quantity(){return quantity;}
int Orderitem::get_id(){return id;}
int Orderitem::search_in_stock(int id,int quantity){
return s.find_product(id,quantity);
}
Orderitem::operator++(){quantity++;}
Orderitem::operator--(){quantity--;}
Orderitem::operator+=(int n){quantity+=n;}
Orderitem::operator-=(int n){quantity-=n;}
fstream &operator<<(fstream& out,Orderitem& oo){
out<<"id : "<<oo.id<<","<<"Quantity : "<<oo.quantity<<","<<"Price : "<<oo.price<<endl;
return out;
}
