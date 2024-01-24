#include "Orders.h"
#include"Order.h"
#include<iostream>

#include<vector>
using namespace std;
vector<Order>OR;
void Orders::Add_order(){
    Order O;
    if(O.Create_order()){
        OR.push_back(O);
    }
}
void Orders::Update_Order(){
    int I;
    cout<<"Enter the id of Order that you want to Update"<<endl;
    cin>>I;
    int u=-1;
    for(int i=0;i<OR.size();i++){
        if(OR[i].get_id()==I){
            u=i;
            break;
        }
    }
    if(u==-1){
        cout<<"Invaild id<please try again>"<<endl;
        return;
    }
int c;
cout<<"1. Update Status"<<endl;
cout<<"2. Update Order"<<endl;
cin>>c;
if(c==1){
    OR[u].Update_status();
}
else if(c==2)OR[u].Update_quantity();
else cout<<"Invaild Choice"<<endl;
}
void Orders::Delete_Order(){
 int I;
    cout<<"Enter the id of Order that you want to Delete"<<endl;
    cin>>I;
    int u=-1;
    for(int i=0;i<OR.size();i++){
        if(OR[i].get_id()==I){
            u=i;
            break;
        }
    }
    if(u==-1){
        cout<<"Invaild id<please try again>"<<endl;
    }
    else OR.erase(OR.begin()+u,OR.begin()+(u+1));
    cout<<"DELETED~"<<endl;
}
fstream fout("Orders.txt",ios::app);
void Orders::Orders_file(){
for(int i=0;i<OR.size();i++){
    fout<<i+1<<"-->";
    fout<<OR[i]<<endl;

}
}
int Orders::find_order(int I){
    int u=-1;
for(int i=0;i<OR.size();i++){

    if(OR[i].get_id()==I){
        u=i;
break;
    }
}
return u;
}
Order* Orders::get_order(int I){
return &(OR[I]);
}
fstream fin("Orders.txt",ios::in);
void Orders::print(){
string s;
int i=1;
while(getline(fin,s)){
    if(s[0]=='T'&&s[4]=='i')
        cout<<i++<<"-->";
    cout<<s<<endl;
}
}
double Orders::get_profit(){
double t=0;
for(int i=0;i<OR.size();i++){
    t+=OR[i].get_total_profit();
}
return t;
}
