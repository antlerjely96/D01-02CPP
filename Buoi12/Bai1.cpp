/*
	1. Nhap n. Tinh n!
	Ví du: n = 5
	5! = 1 * 2 * 3 * 4 * 5
	5! = 4! * 5
	5! = 3! * 4 * 5
	5! = 2! * 3 * 4 * 5
	5! = 1! * 2 * 3 * 4 * 5
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

int giaiThua(int n){
	if(n <= 1){
		return 1;
	}
	return n * giaiThua(n - 1);
	//Return lan 1: 5 * giaiThua(4)
	//return lan 2: 5 * 4 * giaiThua(3)
	//return lan 3: 5 * 4 * 3 * giaiThua(2)
	//return lan 4: 5 * 4 * 3 * 2 * giaiThua(1)
	//return lan 5: 5 * 4 * 3 * 2 * 1
}

int main(){
	//Nhap n
	cout << "n = ";
	int n = nhap();
	int gt = giaiThua(n);
	cout << "n! = " << gt << endl;
	return 0;
}
