#include<iostream>
using namespace std;

class date{
    private:
        int day, month , year;
    public:
        date();
        date(int);
        date(int,int);
        void display();

};

void date::display()
{
    cout<< day <<"/" <<month<<"/"<<year<<endl;
}

date::date()
{
    day = 1;
    month = 2;
    year = 2024;
    cout<< day <<"/" <<month<<"/"<<year<<endl;
}

date::date(int d)
{
    day=month=d;
    year=2024;
    cout<< day <<"/" <<month<<"/"<<year<<endl;
}

date::date(int d,int m)
{
    day=d;
    month=m;
    year=2024;
    cout<< day <<"/" <<month<<"/"<<year<<endl;

}

int main(){
    date d1;
    // d1.display();
    date d2(2);
    date d3(2,3);

}
