/*
	Thuc hien cac yeu cau sau:
1.	Cho nguoi dung nhap vao chi so dien nang tieu thu trong thang (kWh, dang so nguyen, gia su kWh > 0).
2.	Ap dung cong thuc tinh tien dien theo bac thang sau (gia su don gia da bao gom VAT):
	Bac 1: 0 den 50 kWh: 1.800 VND/kWh
	Bac 2: 51 den 100 kWh: 2.000 VND/kWh
	Bac 3: 101 kWh tro lên: 2.500 VND/kWh
3.	Xac dinh tong so tien phai tra dua tren so kWh da nhap.
4.	In ra tong so tien phai tra
*/

#include <iostream>
using namespace std;

int main(){
	/* 1. */
	//Khai bao
	int kWh, totalMoney;
	//Nhap
	do {
		cout << "Nhap so dien: ";
		cin >> kWh;
		if(kWh <= 0){
			cout << "Nhap sai! Phai nhap lai!" << endl;
		}
	} while(kWh <= 0);
	/*
		2. 3. 
	*/
	if(kWh < 50){
		totalMoney = kWh * 1800;
	} else if(kWh < 100){
		totalMoney = 50 * 1800 + (kWh - 50) * 2000;
	} else {
		totalMoney = 50 * 1800 + 50 * 2000 + (kWh - 100) * 2500;
	}
	/*
		4.
	*/
	cout << "Tong tien phai tra: " << totalMoney << endl;
	return 0;
}
