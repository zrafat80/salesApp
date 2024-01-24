#include "Stock.h"
#include<iostream>
#include<fstream>

#include<bits/stdc++.h>
#include"Products.h"
using namespace std;
int f[10000]={0};
vector<pair<Product,int > >S;
void Stock::Addproduct(){
int ID,quantity;
cout<<"Enter the id of Product that you want to add ";
cin>>ID;
if(p->search_product(ID)!=-1&&f[ID]==0){
f[ID]=1;
    cout<<"Enter the quantity of product ";
    cin>>quantity;
    pr=p->get_product(p->search_product(ID));
S.push_back({pr,quantity});
cout<<"ADDED~"<<endl;
}
else if(f[ID]==1)cout<<"Product already exist"<<endl;

}
void Stock::PR_list(Products& b){
p=&b;
}
void Stock::Updateproduct(){
    int ID,quantity=0;
cout<<"Enter the id of Product that you want to Update ";
cin>>ID;
if(p->search_product(ID)!=-1){


for(int i=0;i<S.size();i++){
    if(S[i].first.getid()==ID){
            cout<<"Enter the quantity that you want to add ";
    cin>>quantity;
        S[i].second+=quantity;
        cout<<"UPDATED~"<<endl;
        break;
    }
}
if(quantity==0)cout<<"Invaild id"<<endl;
}
}
void  Stock::Clear_stock(){
S.erase(S.begin(),S.end());
f[10000]={0};
cout<<"CLEARED~"<<endl;
}
void Stock::Stock_file(){
fstream fout("Stock.txt",ios::out);
for(int i=0;i<S.size();i++){
    fout<<S[i].first<<setw(4)<<S[i].second<<endl;
}
fout.close();
}
void Stock::readfile(){
fstream fin("Stock.txt",ios::in);
int t_id,t_type,t_quantity;
string t_name;
int t_price;
string t_number;
while(fin>>t_type,fin>>t_id,getline(fin,t_name,'.'),fin>>t_price,fin>>t_number,fin>>t_quantity){
        Product Pr;
Pr.file(t_id,t_type,t_name,t_price,t_number);
    S.push_back({Pr,t_quantity});
}
for(int i=0;i<S.size();i++){
    f[S[i].first.getid()]=1;
}
}
int  Stock::find_product(int id,int q){
for(int i=0;i<S.size();i++){
    if(S[i].first.getid()==id){
        if(S[i].second>=q){
            S[i].second-=q;
            return 1;
        }
        return 0;
    };
}
return 0;
}
ostream&operator<<(ostream&out,Stock&s){
for(int i=0;i<S.size();i++){
    cout<<i+1<<", "<<"The id of Product : "<<S[i].first<<",The Quantity : "<<S[i].second<<endl;
}
}
