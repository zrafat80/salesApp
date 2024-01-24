#include "Products.h"
#include"Product.h"
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
vector<Product>PR;
void Products::Addnewproduct(){
Product p;
cin>>p;
PR.push_back(p);
cout<<"ADDED"<<endl;
}
void Products::Editproduct(){
    int id;
cout<<"Enter the id of product that you want to Edit ";
cin>>id;
int u=-1;
for(int i=0;i<PR.size();i++){
    if(PR[i].getid()==id){
        u=i;
        break;
    }
}
if(u==-1)cout<<"Invaild id"<<endl;
else {
    PR[u].Update();
    cout<<"EDITED"<<endl;
}
}
void Products::deleteproduct(){
    int id;
cout<<"Enter the id of product that you want to Delete ";
cin>>id;
int u=-1;
for(int i=0;i<PR.size();i++){
    if(PR[i].getid()==id){
        u=i;
        break;
    }
}
if(u==-1)cout<<"Invaild id"<<endl;
else {
    PR.erase(PR.begin()+u,PR.begin()+(u+1));
    cout<<"DELETED"<<endl;
}
}
void Products::Products_File(){
    fstream fout("Products.txt",ios::out);
for(int i=0;i<PR.size();i++){
    fout<<PR[i]<<endl;

}
}

void Products::read_file(){
fstream fin("Products.txt",ios::in);
int t_id,t_type;
string t_name;
int t_price;
string t_number;

while(fin>>t_type,fin>>t_id,getline(fin,t_name,'.'),fin>>t_price,fin>>t_number){

    Product p;

    p.file(t_id,t_type,t_name,t_price,t_number);
    PR.push_back(p);
}
}
int Products::search_product(int id){
int u=-1;
for(int i=0;i<PR.size();i++){

    if(PR[i].getid()==id){
        u=i;
        break;
    }
}
if(u==-1){cout<<"Invaild id"<<endl;
return u;}
else {
    return u;
}

}
Product Products::get_product(int u){
return PR[u];
}
void Products::print(){
for(int i=0;i<PR.size();i++){
    cout<<i+1<<". ";
    cout<<PR[i];
}
}
double Products::getprice(int I){
int u=-1;
for(int i=0;i<PR.size();i++){
    if(PR[i].getid()==I){
        u=i;
        break;

    }
}
return PR[u].getprice();
}
