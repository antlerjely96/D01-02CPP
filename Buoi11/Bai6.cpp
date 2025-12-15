/*
	6. Nhap diem trung binh cua 1 hoc sinh.
	Neu diem > 0 && diem < 5 => Yeu
	Neu diem >= 5 && diem < 6.5 => trung binh
	Neu diem >= 6.5 && diem < 8 => Kha
	Con lai => gioi
*/
#include <iostream>
using namespace std;
double nhap(){
	double n;
	cin >> n;
	return n;
}
void diemTB(double a){
	if(a < 0 || a > 10){
		cout << "Nhap sai" << endl;
	} else if(a < 5){
		cout << "Yeu" << endl;
	} else if(a < 6.5){
		cout << "Trung Binh" << endl;
	} else if(a < 8){
		cout << "Kha" << endl;
	} else {
		cout << "Gioi" << endl;
	}
	return;
}
int main (){
	double a;
	a = nhap();
	diemTB(a);
	return 0;
}
