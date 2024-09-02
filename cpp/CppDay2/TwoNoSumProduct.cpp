#include<iostream>
using namespace std;



int fun_sum (int no1, int no2 ){
	return no1 + no2;
};

int fun_product (int no1, int no2 ){
	return no1 * no2;
};


int main(){
	
	int no1, no2;
	cout<<"Enter no1:\t";
	cin>> no1;
	cout<<"Enter no2:\t";
	cin>> no2;
	
	cout<<"Sum is:";
	fun_sum( no1, no2 );
	cout<<"sum is";
	fun_product( no1, no2 );
	
	

}

