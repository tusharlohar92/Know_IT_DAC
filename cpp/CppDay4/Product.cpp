#include<iostream>
using namespace std;
 
 class product{
    private:
        int product_code;
        float unit_price;
        char *product_name;
    public:
        product();
        product(const int , const char*, const float);
        void display();
        product(int,int);
 };

 product::product()
 {
 }

 product::product(const int, const char *, const float)
 {
 }

 void product::display()
 {
 }

 product::product(int, int)
 {
 }
