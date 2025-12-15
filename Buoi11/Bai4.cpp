/* 
	4. Nhap 1 so nguyen, kiem tra so nguyen do la am hay duong.
*/
#include <iostream>
using namespace std;
int nhap(){
	int n; 
	cin >> n; 
	return n;
}
void kiemTraSoNguyenLaAmHayDuong (int a){
	if (a > 0){
		cout << a << " so nguyen duong" << endl; 
	}
	else if ( a < 0){
		cout << a << " la so nguyen am" << endl;
	} else {
		cout << a << " la so khong am khong duong" << endl;
	}
	return;
}

int main (){
	int x;
	x = nhap();
	kiemTraSoNguyenLaAmHayDuong (x);
	return 0;
}
