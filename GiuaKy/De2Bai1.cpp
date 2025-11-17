/*
	Thuc hien cac yeu cau sau:
1.	Cho nguoi dung nhap vao so tien goc ban dau (P, dang so thuc double).
2.	Cho nguoi dung nhap vao so thang gui tiet kiem (N, dang so nguyen, gia su N phai lon hon 0).
3.	Cho nguoi dung nhap vao lai suat hang thang (dang so thuc, vi du: 0.005 tuong ung voi 0.5%).
4.	Tinh toan so tien lai nhan duoc qua tung tháng (1 thang den N tháng). Tien lai thang sau duoc tinh tren tong so du cua thang truoc (lai kep).
	Cong thuc tinh lai cua moi thang: Lai = So du thang truoc * Lai suat.
	Cong thuc tinh so du moi: So du moi = So du thang truoc + Lai.
5.	in ra tong so tien goc + lai ma khach hang nhan duoc sau N thang.
*/

#include <iostream>
using namespace std;

int main(){
	/*
		1. 2. 3.
	*/
	//Khai bao
	double P, laiSuat, tienLai;
	int N;
	//Nhap
	do {
		cout << "Nhap so tien goc: ";
		cin >> P;
		if(P <= 0){
			cout << "Nhap sai! Nhap lai!" << endl;
		}
	} while(P <= 0);
	do {
		cout << "Nhap so thang gui: ";
		cin >> N;
		if(N <= 0){
			cout << "Nhap sai! Nhap lai!" << endl;
		}
	} while(N <= 0);
	do {
		cout << "Nhap lai suat: ";
		cin >> laiSuat;
		if(laiSuat <= 0){
			cout << "Nhap sai! Nhap lai!" << endl;
		}
	} while(laiSuat <= 0);
	/*
		4.
	*/
	for(int i = 1; i <= N; i++){
		tienLai = P * laiSuat;
		P = P + tienLai;
	}
	/*
		5.
	*/
	cout << "Tong tien ca goc va lai sau " << N << " thang: " << P << endl;
	return 0;
}
