#include<iostream>
using namespace std;

class point {
    private:
        int x,y;
    public:
        point(int ,int);
        void showpoint();
};

    point :: point(int xcord, int ycord){
            x=xcord;
            y=ycord;

}

void point :: showpoint(){
    cout<<"["<<x<<","<<y<<"]"<<endl;
}

int main(){
    point p1(3,6);
    p1.showpoint();
}

