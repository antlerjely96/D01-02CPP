/*
	4. Nhap so nguyen n tu ban phim
	a. Kiem tra n co phai so nguyen to hay khong
	b. Hien thi cac so nguyen to trong khoang tu 1 den n.
*/

#include <iostream>
using namespace std;
//Nhap
int nhap(){
	int n;
	cin >> n;
	return n;
}
//Kiem tra so nguyen to
int kiemTraSoNguyenTo(int n){
	int dem = 0;
	if(n <= 1){
		dem = 1;
	} else {
		for(int i = 2; i < n; i++){
			if(n % i == 0){
				dem++;
			}
		}
	}
	return dem;
}
//Hien thi so nguyen to
void timSoNguyenTo(int n){
	for(int i = 2; i <= n; i++){
		int dem = kiemTraSoNguyenTo(i);
		if(dem == 0){
			cout << i << "\t";
		}
	}
}
int main() {
	cout << "n = ";
	int n = nhap();
	cout << "a. " << endl;
	if(kiemTraSoNguyenTo(n) == 0){
		cout << n << " la so nguyen to!" << endl;
	} else {
		cout << n << " khong la so nguyen to!" << endl;
	}
	cout << "b." << endl;
	timSoNguyenTo(n);
	return 0;
}
