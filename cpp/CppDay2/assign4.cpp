#include<iostream>
using namespace std;

void Accept(int *arr,int size){
    

    cout<<endl<<"Enter numbers in array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void Display(int *arr,int size){

    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
}

void findMax(int *arr,int size){
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<endl<<"Maximum is: "<<max;

}

void findMin(int *arr,int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<endl<<"Minimum is: "<<min;

}

void searchElement(int *arr,int size){
    int ele;
    cout<<endl<<"Enter the element to search: ";
    cin>>ele;
    for(int i=0;i<size;i++){
        if(arr[i]==ele)
            cout<<endl<<"Element found"<<arr[i];
    }
    cout<<endl<<"Not found";
}
int main(){
    int *arr;
    int size;
    cout<<endl<<"Enter number of elements: ";
    cin>>size;
    arr = new int[size];

    Accept(arr,size);
    Display(arr,size);    
    findMax(arr,size);
    findMin(arr,size);
    searchElement(arr,size);
}

