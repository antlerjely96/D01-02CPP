/* 
	1. Nhap 2 so nguyen a, b.
	Tinh tong, hieu, tich, thuong.
*/
#include <iostream>
using namespace std;

//Ham nhap
int nhap(){
	int n;
	cin >> n;
	return n;
}
//Ham tinh tong
void tinhTong(int a, int b){
	int tong = a + b;
	cout << "Tong: " << tong << endl;
	return;
}
//Ham tinh hieu
void tinhHieu(int m, int n){
	int hieu = m - n;
	cout << "Hieu: " << hieu << endl;
	return;
}
//Ham tinh tich
void tinhTich(int a, int b){
	int tich = a * b;
	cout << "Tich: " << tich << endl;
	return;
}
//Ham tinh thuong
void tinhThuong(int a, int b){
	if(b == 0){
		cout << "Khong chia duoc cho 0" << endl;
		return;
	}
	
	double thuong = (double)a / b;
	return;
}

int main(){
	int a, b;
	//Bien a chua gia tri duoc tra ve tu ham nhap()
	a = nhap();
	//Bien a chua gia tri duoc tra ve tu ham nhap()
	b = nhap();
	//Tinh tong
	tinhTong(a, b);
	//Tinh hieu
	tinhHieu(a, b);
	//Tinh tich
	tinhTich(a, b);
	//Tinh thuong
	tinhThuong(a, b);
	return 0;
}
