// C++ program to swap two
// numbers using 3rd variable

#include <iostream>
using namespace std;

// Driver code
int main()
{
    int a , b;
	cout<<"Enter a Number a:";
	cin >> a;
	cout<<"Enter a Number b:";
	cin >> b;
	
    cout << "Before swapping a = " << a << " , b = " << b << endl;

    // temporary variable
    
    int temp;

    // appying swapping algorithm
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "After swapping a = " << a << " , b = " << b << endl;

    return 0;
}

