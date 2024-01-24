#include "Customers.h"
#include<fstream>
#include"Customer.h"
#include<iostream>
#include<vector>
using namespace std;
vector<Customer>CU;
int c=0;
void Customers::AddnewCustomer(){
Customer C;
cin>>C;
CU.push_back(C);

}
void Customers::EditCustomer(){
int id_cust;
cout<<"Enter the id of the customer that you want to Edit  ";
cin>>id_cust;
int u=-1;
for(int i=0;i<CU.size();i++){

    if(id_cust==CU[i].getid()){

        u=i;
        break;
    }
}
if(u==-1)cout<<"Invild id~"<<endl;
else {
    CU[u].edit();
    cout<<"EDITED~"<<endl;
}
}
void Customers::DeleteCustomer(){
int id_cust;
cout<<"Enter the id of the customer that you want to delete  ";
cin>>id_cust;
int u=-1;
for(int i=0;i<CU.size();i++){

    if(id_cust==CU[i].getid()){

        u=i;
        break;
    }
}
if(u==-1)cout<<"Invild id~"<<endl;
else {
   CU.erase(CU.begin()+u,CU.begin()+(u+1));
   cout<<"DELETED~"<<endl;
}
}
void Customers::FileCustomer(){
    fstream fout("Customers.txt",ios::out);
for(int i=0;i<CU.size();i++){
   fout<<CU[i];
}
}
void Customers::read_file(){
fstream fin("Customers.txt",ios::in);
int t_id,t_type;
string t_phone,t_name,t_location;

while(fin>>t_type,fin>>t_id,getline(fin,t_phone,'.'),getline(fin,t_name,'.'),getline(fin,t_location,'.')){

    Customer E;

    E.file(t_type,t_id,t_phone,t_name,t_location);
    CU.push_back(E);
}
}
int Customers::search_Customer(int id){
int u=-1;
for(int i=0;i<CU.size();i++){

    if(CU[i].getid()==id){
        u=i;
        break;
    }
}
if(u==-1){
return u;}
else {
    return u;
}

}
Customer Customers::get_Customer(int u){
return CU[u];
}
void Customers::print (){
for(int i=0;i<CU.size();i++){
    cout<<i+1<<". " <<CU[i];
}
}
