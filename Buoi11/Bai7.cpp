/*
	Hien thi menu sau:
	1. Nhap 2 canh cua hinh chu nhat
	Tinh chu vi, dien tich hinh chu nhat
	2. Nhap canh cua hinh vuong.
	Tinh chu vi, dien tich hinh vuong
	3. Nhap ban kinh cua hinh tron
	Tinh chu vi, dien tich hinh tron
	Chon:
	Khi nhap so tu 1 den 3 thi se thuc hien menu tuong ung
*/

#include <iostream>
using namespace std;
//Nhap cac canh
double nhapCanh(){
	double n;
	cin >> n;
	return n;
}
//Nhap lua chon
int nhapLuaChon(){
	int n;
	cin >> n;
	return n;
}
//1.
void hinhChuNhat(){
	cout << "Chieu dai: ";
	double chieuDai = nhapCanh();
	cout << "Chieu rong: ";
	double chieuRong = nhapCanh();
	cout << "Chu vi: " << (chieuDai + chieuRong) * 2 << endl;
	cout << "Dien tich: " << chieuDai * chieuRong << endl;
}
//2.
void hinhVuong(){
	cout << "Canh: ";
	double canh = nhapCanh();
	cout << "Chu vi: " << canh * 4 << endl;
	cout << "Dien tich: " << canh * canh << endl;
}
//3.
void hinhTron(){
	cout << "Ban kinh: ";
	double banKinh = nhapCanh();
	cout << "Chu vi: " << banKinh * 2 * 3.14 << endl;
	cout << "Dien tich: " << banKinh * banKinh * 3.14 << endl;
}
int main(){
	cout << "- Menu -" << endl;
	cout << "1. Nhap 2 canh cua hinh chu nhat. Tinh chu vi, dien tich hinh chu nhat" << endl;
	cout << "2. Nhap canh cua hinh vuong. Tinh chu vi, dien tich hinh vuong" << endl;
	cout << "3. Nhap ban kinh cua hinh tron. Tinh chu vi, dien tich hinh tron" << endl;
	cout << "Chon: ";
	int chon = nhapLuaChon();
	switch(chon){
		case 1:
			hinhChuNhat();
			break;
		case 2:
			hinhVuong();
			break;
		case 3:
			hinhTron();
			break;
		default:
			cout << "Khong co lua chon" << endl;
			break;
	}
	return 0;
}
