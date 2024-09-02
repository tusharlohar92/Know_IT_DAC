#include <iostream>
using namespace std;
 
// #define PI 3.141
 
int main() {
	
    float radius, area, circum, PI = 3.141 ;
    cout << "Enter radius of circle:\t";
    cin >> radius;
    
    // Area of Circle = PI x Radius X Radius 
    
    area = PI*radius*radius;
    cout << "Area of circle : " << area <<endl;
    
    
	// Calculating the circumference of the circle: 2 * PI * radius
    
    circum = 2 * PI * radius;
	cout << "circumference of circle : " << circum;

     
    return 0;
}
