#include<iostream>
using namespace std;

struct Student
{
    int rollno;
    char name[100];
    int totalmarks;

    void Accept()
    {
        cout<<endl<<"Enter roll no: ";
        cin>>rollno;

        cout<<endl<<"Enter name: ";
        cin>>name;

        cout<<endl<<"Enter total marks: ";
        cin>>totalmarks;
    }

    void Display(){
        cout<<endl<<"Roll no is: "<<rollno;
        cout<<endl<<"Name is: "<<name;
        cout<<endl<<"total marks are: "<<totalmarks;
    }

    

    
};

int main()
{
    //struct Student s1
    // s1.Accept();
    // s1.Display();

    struct Student student[5];
    int i;
    for( i=0;i<5;i++){
        student[i].Accept();
    }

    
    for(int i=0;i<5;i++){
        student[i].Display();
    }

    int max=0;  
    for(int i=0;i<5;i++){
        if(student[i].totalmarks>max)
            max = student[i].totalmarks;
    }

    cout<<endl<<"Maximum marks are: "<<max;
        
    

}
