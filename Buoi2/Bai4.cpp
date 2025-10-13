/*
	4. Nhap diem trung binh cua 1 hoc sinh.
	Neu diem >= 0 && diem < 5 => Yeu
	Neu diem >= 5 && diem < 6.5 => trung binh
	Neu diem >= 6.5 && diem < 8 => Kha
	Con lai => gioi
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao bien
	double diem;
	//Nhap diem
	cout << "Diem: ";
	cin >> diem;
	//Kiem tra
	if(diem >= 0 && diem < 5){
		cout << "Yeu" << endl;
	} else if(diem < 6.5){
		cout << "Trung binh" << endl;
	} else if(diem < 8){
		cout << "Kha" << endl;
	} else if(diem <= 10){
		cout << "Gioi" << endl;
	} else {
		cout << "Nhap sai" << endl;
	}
	return 0;
}
