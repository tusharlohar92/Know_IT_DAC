#include<iostream>
using namespace std;

void add(int a,int b){    
    cout<<endl<<a+b;
}

void add(int a,float b){
    cout<<endl<<a+b;
}

void add(float a,int b){
    cout<<endl<<a+b;
}

void add(float a, float b){
    cout<<endl<<a+b;
}
int main(){
    add(4,5);
    add(4,3.14f);
    add(3.14f,5);
    add(2.2f,2.2f);
    
}