#include<iostream>
using namespace std;

class complex{
    private:
        int real , img;
    public:
        complex();
        void display();
        complex(int, int);

};

complex::complex(int r, int i)
{
    real = r;
    img = i;
}

complex::complex()
{
    real  = 2 ;
    img = 3;
}
void complex::display()
{
    cout<<"Complex number Is: "<<real<<"+"<<img<<"i";
}

int main(){
    complex c1;
    c1.display();
}