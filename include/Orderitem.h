#ifndef ORDERITEM_H
#define ORDERITEM_H
#include"Stock.h"
#include<fstream>
class Orderitem
{
private:
    double price;

    int quantity;
    int flag;
int id;
public:
   void Add_OrderItem();

   int get_flag();
   double get_price();
   int get_quantity();
   int get_id();
 int search_in_stock(int ,int );
operator++();
operator--();
operator+=(int );
operator-=(int );
friend fstream &operator<<(fstream&out,Orderitem& oo);

};

#endif // ORDERITEM_H
