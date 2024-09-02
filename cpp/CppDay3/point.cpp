#include<iostream>
using namespace std;

class point {
    private:
        int x,y;
    public:
        int setpoint(int ,int);
        void showpoint();
};

int point :: setpoint(int xcord, int ycord){
    x=xcord;
    y=ycord;
    return x,y;
}

void point :: showpoint(){
    cout<<"["<<x<<","<<y<<"]"<<endl;
}

int main(){
    point p1;
    p1.setpoint(2,4);
    p1.showpoint();
}