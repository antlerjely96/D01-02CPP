/*
	1. Nhap 1 nguyen a tu ban phim.
	Hien thi a la so am hay so duong.
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao a
	int a;
	//Nhap a
	cout << "a = ";
	cin >> a;
	//Kiem tra dieu kien a
	if(a > 0){
		//Thuc hien khi a > 0 tra ve true
		cout << "a la so duong" << endl;
	} else if(a < 0){
		//Thuc hien khi a > 0 tra ve false, a < 0 tra ve true
		cout << "a la so am" << endl;
	} else {
		//Thuc hien khi a > 0, a < 0 tra ve false
		cout << "a la so khong am khong duong" << endl;
	}
	return 0;
}
