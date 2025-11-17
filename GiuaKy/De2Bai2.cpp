/* 
	Thuc hien cac yeu cau sau:
1.	Cho nguoi dung nhap vao so tuan can thong ke (W, W phai lon hon 0).
2.	Trong moi tuan, yeu cau nguoi dung nhap so gio lam viec thuc te (dang so thuc double).
3.	So gio lam viec tieu chuan moi tuan la 40 gio. Kiem tra va tinh toan:
	Tong so gio lam viec thuc te trong W tuan.
	Tong so gio lam them (so gio vuot qua 40 gio trong moi tuan).
	Tong so gio nghi (so gio thieu so voi 40 gio trong moi tuan).
4.	In ra Tong so gio lam viec thuc te, Tong so gio lam them, Tong so gio nghi cua nhan vien.
*/
#include <iostream>
using namespace std;

int main(){
	/*
		1.
	*/
	//Khai bao
	int W, soGioLamViecThucTe, tongSoGioLamViecThucTe = 0;
	int tongSoGioLamThem = 0, tongSoGioNghi = 0;
	//Nhap
	do {
		cout << "Nhap so tuan: ";
		cin >> W;
		if(W <= 0){
			cout << "Nhap sai! Nhap lai" << endl;
		}
	} while(W <= 0);
	/*
		2.
	*/
	for(int i = 1; i <= W; i++){
		cout << "Nhap so gio lam viec thuc te cua tuan " << i << " : ";
		cin >> soGioLamViecThucTe;
		tongSoGioLamViecThucTe += soGioLamViecThucTe;
		if(soGioLamViecThucTe > 40){
			tongSoGioLamThem += (soGioLamViecThucTe - 40);
		}
		if(soGioLamViecThucTe < 40){
			tongSoGioNghi += (40 - soGioLamViecThucTe);
		}
	}
	/*
		4.
	*/
	cout << "Tong so gio lam viec thuc te trong " << W << " tuan: " << tongSoGioLamViecThucTe << endl;
	cout << "Tong so gio lam them trong " << W << " tuan: " << tongSoGioLamThem << endl;
	cout << "Tong so gio nghi trong " << W << " tuan: " << tongSoGioNghi << endl;
	return 0;
}
