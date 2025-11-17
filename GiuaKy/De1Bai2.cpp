/*
	Thuc hien cac yeu cau sau:
1.	Cho nguoi dung nhap can nang (goi là W) (don vi là kg) và chieu cao (goi là H) (don vi là m)
2.	Tinh chi so BMI theo công thuc: BMI = W / (H^2).
3.	Phan loai BMI theo chuan sau:
	Thieu can: BMI < 18.5
	Binh thuong: 18.5 <= BMI < 25.0
	Thua can: 25.0 <= BMI < 30.0
	Beo phi: BMI >= 30.0
4.	In ra gia tri BMI da tinh và ket qua phan loai.
*/

#include <iostream>
using namespace std;

int main(){
	/*
		1. 
	*/
	//Khai bao
	double W, H, BMI;
	//Nhap
	do {
		cout << "Can nang: ";
		cin >> W;
		if(W <= 0){
			cout << "Nhap sai! Nhap lai!" << endl;
		}
	} while(W <= 0);
	do {
		cout << "Chieu cao: ";
		cin >> H;
		if(H <= 0){
			cout << "Nhap sai! Nhap lai!" << endl;
		}
	} while(H <= 0);
	/*
		2.
	*/
	BMI = W / (H * H);
	/*
		3. 4.
	*/
	cout << "BMI: " << BMI << endl;
	if(BMI < 18.5){
		cout << "Thieu can" << endl;
	} else if(BMI < 25){
		cout << "Binh thuong" << endl;
	} else if(BMI < 30){
		cout << "Thua can" << endl;
	} else {
		cout << "Beo phi" << endl;
	}
	return 0;
}
