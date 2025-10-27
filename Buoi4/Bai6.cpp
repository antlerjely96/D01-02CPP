/*
	6. Nhap so nguyen n tu ban phim.
	Tinh tong cac chu so cua n
*/
#include <iostream>
using namespace std;
int main(){
	//Khai bao n
	int n;
	//Nhap n
	cout << "Nhap n: ";
	cin >> n;
	//Khai bao tong
	int tong = 0;
	//Vong lap
	while(n != 0){
		tong += n % 10;
		n /= 10;
	}
	//Hien thi ket qua
	cout << tong << endl;
	return 0;	
}
