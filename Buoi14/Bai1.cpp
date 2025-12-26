/*
	1. Nhap 1 so nguyen n. Tinh
	a. Can bac 2 cua n.
	b. 2^n
	c. |n|
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cout << "n = ";
	cin >> n;
	//a
	cout << sqrt(n) << endl;
	//b
	cout << pow(2, n) << endl;
	//c
	cout << abs(n) << endl;
	return 0;
}

