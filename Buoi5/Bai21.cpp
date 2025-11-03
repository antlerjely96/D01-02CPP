/*
	21. Nhap so nguyen n tu ban phim.
	Hien thi n so dau tien cua day fibonacci
*/
#include <iostream>
using namespace std;

int main(){
	int soLuongSoCanHienThi;
	cout << "nhap so luong so cua chuoi can hien thi: ";
	cin >> soLuongSoCanHienThi;
	if(soLuongSoCanHienThi <= 0){
		cout << "Nhap khong dung" << endl;
	} else {
		long long int soDungTruoc = 0;
		long long int soDungSau = 1;
		long long int soTiepTheo;
		for(int i = 1; i <= soLuongSoCanHienThi; i++){
			cout << soDungTruoc << "\t";
			soTiepTheo = soDungTruoc + soDungSau;
			soDungTruoc = soDungSau;
			soDungSau = soTiepTheo;
		}
	}
	return 0;
}
