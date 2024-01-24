#ifndef ORDERS_H
#define ORDERS_H
#include"Order.h"

class Orders
{
 public:
     void Add_order();
     void Update_Order();
     void Delete_Order();
void Orders_file();
int find_order(int );
Order* get_order(int );
void print ();
double get_profit();

};

#endif // ORDERS_H
