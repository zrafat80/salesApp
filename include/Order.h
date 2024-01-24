#ifndef ORDER_H
#define ORDER_H
#include"Date.h"
#include<Customer.h>
#include"Customers.h"
#include"Orderitem.h"
#include<vector>
enum status{NEW,HOLD,PAID,CANCELED};
class Order
{
private:
    int id,number;
    double total;
    Date date;
    status os;
    Customer* cust;
    Customers C;
    vector<Orderitem>OI;
    public:
    int  Create_order();
     Order ();
     void Update_status();
     void Update_quantity();
     int get_id();
      friend fstream &operator<<(fstream&out,Order& o);
      string get_status();
      double get_total_profit();

};

#endif // ORDER_H
