#include <iostream>
using namespace std;

int main(){
	/* Nhap 2 so nguyen tu ban phim.
	Tinh tong, hieu, tich, thuong cua 2 so do */
	
	//Khai bao 2 bien
	int a;
	int b;
	//Nhap 2 bien
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	//Tinh tong
	int tong = a + b;
	//Tinh hieu
	int hieu = a - b;
	//Tinh tich
	int tich = a * b;
	//Tinh thuong
	float thuong = (float)a / b;
	//Hien thi ket qua
	cout << "a + b = " << tong << endl;
	cout << "a - b = " << hieu << endl;
	cout << "a * b = " << tich << endl;
	cout << "a / b = " << thuong << endl;
	return 0;
}
