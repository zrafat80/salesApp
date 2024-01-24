#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

using namespace std;
class Product
{
   private:
       int id;
       string name;
       string  number;
       double price;
      int type;
   public:
  friend istream&operator>>(istream&in,Product&p);
   friend ostream&operator<<(ostream&out,Product&p);
   friend fstream &operator<<(fstream&out,Product& p);
  void Update();
  int getid();
void file(int ,int, string ,int  ,string  );
double getprice();

};

#endif // PRODUCT_H
