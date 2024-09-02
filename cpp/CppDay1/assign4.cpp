#include<iostream>
using namespace std;


int main(int no, char* p[]){
    int sum=0;
    int arr[5];
    for(int i=1;i<5;i++){
        arr[i-1] = atoi(p[i]);
        sum = sum + arr[i-1];  
    }
    float avg = sum/5;
    cout<<"\n\t Sum is "<<sum<<"\n\t Average is "<<avg;
    

}