#ifndef STOCK_H
#define STOCK_H
#include"Products.h"
#include<vector>
#include"Product.h"
class Stock
{
 private:
     int id;
     Product pr;
     Products *p;

 public:
void PR_list(Products&);
     void Addproduct();
     void Updateproduct();
void Clear_stock();
void Stock_file();
void readfile();
friend ostream&operator<<(ostream&out,Stock&s);
int find_product(int ,int );
};

#endif // STOCK_H
