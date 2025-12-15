/*
	3. Nhap 2 so a va b.
	Tinh chu vi, dien tich cua hinh chu nhat có canh a va b
*/
#include <iostream>
using namespace std;
int nhap(){
	cout << "nhap vao do dai 1 canh: ";
	int n;
	cin >> n;
	return n;
}
void chuVi(int a, int b){
	int kq = (a + b) * 2;
	cout << "Chu vi hinh chu nhat la:" << kq << endl;
	return;
}
void dienTich(int a, int b){
	int kq = a * b;
	cout << "Dien tich hinh chu nhat la:" << kq << endl;
	return;
}
int main(){
	int a, b;
	a = nhap();
	b = nhap();
	chuVi(a, b);
	dienTich(a, b);
	return 0;
}
