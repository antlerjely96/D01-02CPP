/*
	3. Nhap so tuoi cua 1 nguoi tu ban phim (tuoi la so nguyen)
	Kiem tra:
	Neu tuoi > 0 && tuoi < 6: hoc mau giao
	Neu tuoi >= 6 && tuoi < 11: hoc cap 1
	Neu tuoi >= 11 && tuoi < 16: hoc cap 2
	Neu tuoi >= 16 && tuoi < 18: hoc cap 3
	Neu tuoi >= 18 && tuoi < 23: Hoc dai hoc
	Neu tuoi >= 23 && tuoi <= 65: Di lam
	Con lai: Nghi huu
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao bien
	int tuoi;
	//Nhap bien
	cout << "Nhap tuoi: ";
	cin >> tuoi;
	//Kiem tra
	if(tuoi < 0){
		cout << "Nhap sai" << endl;
	}
	else if(tuoi < 6){
		//Thuc hien khi dieu kien tuoi > 0 && tuoi < 6 tra ve true
		cout << "Hoc mau giao" << endl;
	} else if (tuoi < 11){
		/* Thuc hien khi:
			tuoi > 0 && tuoi < 6 tra ve false
			tuoi >= 6 && tuoi < 11 tra ve true
		*/
		cout << "Hoc cap 1" << endl;
	} else if(tuoi < 16){
		/* Thuc hien khi:
			tuoi > 0 && tuoi < 6 tra ve false
			tuoi >= 6 && tuoi < 11 tra ve false
			tuoi >= 11 && tuoi < 16 tra ve true
		*/
		cout << "Hoc cap 2" << endl;
	} else if(tuoi < 18){
		/* Thuc hien khi:
			tuoi > 0 && tuoi < 6 tra ve false
			tuoi >= 6 && tuoi < 11 tra ve false
			tuoi >= 11 && tuoi < 16 tra ve false
			tuoi >= 16 && tuoi < 18 tra ve true
		*/
		cout << "Hoc cap 3" << endl;
	} else if(tuoi < 23){
		/* Thuc hien khi:
			tuoi > 0 && tuoi < 6 tra ve false
			tuoi >= 6 && tuoi < 11 tra ve false
			tuoi >= 11 && tuoi < 16 tra ve false
			tuoi >= 16 && tuoi < 18 tra ve false
			tuoi >= 18 && tuoi < 23 tra ve true
		*/
		cout << "Hoc dai hoc" << endl;
	} else if(tuoi <= 65){
		/* Thuc hien khi:
			tuoi > 0 && tuoi < 6 tra ve false
			tuoi >= 6 && tuoi < 11 tra ve false
			tuoi >= 11 && tuoi < 16 tra ve false
			tuoi >= 16 && tuoi < 18 tra ve false
			tuoi >= 18 && tuoi < 23 tra ve false
			tuoi >= 23 && tuoi <= 65 tra ve true
		*/
		cout << "Di lam" << endl;
	} else {
		/* Thuc hien khi:
			tuoi > 0 && tuoi < 6 tra ve false
			tuoi >= 6 && tuoi < 11 tra ve false
			tuoi >= 11 && tuoi < 16 tra ve false
			tuoi >= 16 && tuoi < 18 tra ve false
			tuoi >= 18 && tuoi < 23 tra ve false
			tuoi >= 23 && tuoi <= 65 tra ve false
		*/
		cout << "Nghi huu" << endl;
	}
	return 0;	
}
