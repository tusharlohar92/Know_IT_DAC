#include <iostream>
using namespace std;

class date {
    private:
        int day,month,year;
    public:
        void setdate(int,int,int);
        void showdate();
        void setday(int);
        void setmonth(int);
        void setyear(int); 
              
};

void date :: setdate(int d, int m, int y)
    {
     day = d;
     month = m;
     year = y;
     }
void date :: setday(int d){
    day = d;
}     
void date :: setmonth(int m){
    day = m;
}     
void date :: setyear(int y){
    day = y;
}     


void date :: showdate() {
    cout << " Date "<< day << " / " << month << " / " << year <<endl <<endl;
}

int main() {
    date d1;
    d1.setdate(1,10,2024);
    d1.showdate();
    d1.setday(2);
    d1.setmonth(12);
    d1.setyear(2024);
    d1.showdate();
}
