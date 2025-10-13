/*
	1. Nhap 3 so nguyen a, b, c.
	Hien thi so lon nhat va so nho nhat trong 3 so
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao a, b, c
	int a;
	int b;
	int c;
	//Nhap a
	cout << "a = ";
	cin >> a;
	//Nhap b
	cout << "b = ";
	cin >> b;
	//Nhap c
	cout << "c = ";
	cin >> c;
	//Kiem tra
	if(a > b){
		if(a > c){
			cout << "max = " << a << endl;
		} else {
			cout << "max = " << c << endl;
		}
	} else {
		if(b > c){
			cout << "max = " << b << endl;
		} else {
			cout << "max = " << c << endl;
		}
	}
	return 0;
}
