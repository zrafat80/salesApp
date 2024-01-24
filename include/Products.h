#ifndef PRODUCTS_H
#define PRODUCTS_H

#include"product.h"
class Products
{
public:

void  Addnewproduct();
void Editproduct();
void deleteproduct();
void Products_File();
  void read_file();
 int  search_product(int );
 void print ();
 Product get_product(int);
 double getprice(int );

};

#endif // PRODUCTS_H
