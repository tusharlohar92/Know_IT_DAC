#include<iostream>
using namespace std;

 class calculator{
    private:
        int no1, no2;
    public:
        int Accept_value(int , int);
        int Addition(int , int);
        int Subtraction(int , int);
        int Multiplication(int , int);
        float Division(int , int);
        void Display_value();

 };

 int calculator::Accept_value(int Number1, int Number2)
 {
    no1 = Number1;
    no2 = Number2;
    return no1, no2 ;
 }
 
 void calculator::Display_value()
 {
     cout<<"Number 1st Is : "<<no1<<endl;
     cout<<"Number 2nd Is : "<<no2;
 }

 int calculator::Addition(int Number1, int Number2)
 {
    cout<<"Addition Is :" << Add;
    Add =  no1 + no2 ;
 }

 int calculator::Subtraction(int Number1, int Number2)
 {
     return no1 - no2;
 }

 int calculator::Multiplication(int Number1, int Number2)
 {
     return no1 * no2;
 }

 float calculator::Division(int Number1, int Number2)
 {
     return no1 / no2;
 }


 int main(){
    calculator o1;
    o1.Accept_value(2,4);
    o1.Display_value();
    o1.Addition(2,4);
    o1.Subtraction(2,4);
    o1.Multiplication(2,4);
    o1.Division(2,4);
}
