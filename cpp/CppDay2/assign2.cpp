#include<iostream>
using namespace std;

void product(int a=5, int b=4, int c=2){
    int prod=a*b*c;
    cout<<endl<<"Product is: "<<prod;
    
}

int main(){
    product();
    product(2,2);
    product(2,2,2);
}

