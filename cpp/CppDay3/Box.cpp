#include <iostream>
using namespace std;
class box {
    private:
        int height, width , depth;
    public:
        void setheight(int);
        void setwidth(int);
        void setdepth(int);
        int showvolume(int, int , int);
};

void  box :: setheight(int h)
{
    height = h;
}

void box :: setwidth(int w)
{
    width = w;
}

void box :: setdepth(int d)
{
    depth = d;
}

int box :: showvolume(int h, int w, int d)
{
  int volume = h* w* d;
  return volume;
}

int main() {
    box b1;
    b1.setheight(6);
    b1.setwidth(5);
    b1.setdepth(3);
    cout<<"volume of box is :"<<b1.showvolume(6,5,3)<<endl;
    
}