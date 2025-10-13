/*
	2. Nhap thang. Hien thi so ngay trong thang
*/
#include <iostream>
using namespace std;

int main(){
	//Khai bao thang
	int thang;
	//Nhap thang
	cout << "thang: ";
	cin >> thang;
	//Kiem tra
	switch(thang){
		case 1:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		case 2:
			cout << "Thang " << thang << " co 28 hoac 29 ngay" << endl;
			break;
		case 3:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		case 4:
			cout << "Thang " << thang << " co 30 ngay" << endl;
			break;
		case 5:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		case 6:
			cout << "Thang " << thang << " co 30 ngay" << endl;
			break;
		case 7:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		case 8:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		case 9:
			cout << "Thang " << thang << " co 30 ngay" << endl;
			break;
		case 10:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		case 11:
			cout << "Thang " << thang << " co 30 ngay" << endl;
			break;
		case 12:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		default:
			cout << "Khong ton tai thang da nhap" << endl;
			break;
	}
	return 0;
}
