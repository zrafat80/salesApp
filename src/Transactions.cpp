#include "Transactions.h"
#include<iostream>
#include<fstream>
#include"Transaction.h"
#include<vector>
using namespace std;
vector<Transaction>TR;
void Transactions::AddNewTransaction(){
Transaction T;
if(T.Add_Transaction()){
    TR.push_back(T);
    cout<<"ADDED~"<<endl;
}
}
void Transactions::Delete_Transaction(){
    int I;
cout<<"Enter the id of Transactio that you want to Delete : ";
cin>>I;
int u=-1;
for(int i=0;i<TR.size();i++){
    if(TR[i].get_id()==I){
        u=i;
        break;
    }
}
if(u!=-1){
    TR.erase(TR.begin()+u,TR.begin()+(u+1));
    cout<<"DELETED~"<<endl;
}
else cout<<"Invaild id<Please try again>"<<endl;
}
fstream out("Transaction.txt",ios::app);
void Transactions::Transactions_File(){
for(int i=0;i<TR.size();i++){
out<<i+1<<" . ";
    out<<TR[i]<<endl;
    }
}
fstream in("Transaction.txt",ios::in);
void Transactions::print(){
string s;
while (getline(in,s)){
    cout<<s<<endl;
}
}
