#include<iostream>
using namespace std;

class box
{   private:
    
        int height, width, depth;

    public:
        box (int,int,int);
        void display();
};

void box::display()
{
    cout<<height<<"\t"<<width<<"\t"<<depth<<endl;
}


box:: box(int h, int w, int d){
    height = h;
    width = w;
    depth = d;
}

int main(){
    box b1(2,3,5);
    b1.display();
}

