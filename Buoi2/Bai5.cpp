/*
	5. Nhap thang la 1 so nguyen. Hien thi so ngay trong thang do
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao bien
	int thang;
	//Nhap bien
	cout << "thang: ";
	cin >> thang;
	//Kiem tra
	if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
		cout << thang << " co 31 ngay";
	} else if(thang == 4 || thang == 6 || thang == 9 || thang = 11){
		cout << thang << " co 30 ngay";
	} else if(thang == 2){
		cout << thang << " co 28 hoac 29 ngay";
	} else {
		cout << "Thang da nhap khong ton tai" << endl;
	}
	return 0;
}
