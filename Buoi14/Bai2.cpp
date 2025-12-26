/*
	2. Nhap va hien thi thong tin cua 5 hoc sinh.
	Thong tin cua cac hoc sinh bao gom: id, name, birthday, gender, mark
*/

#include <iostream>
#include <cstring>
using namespace std;

//Khai bao struc HocSinh

struct HocSinh{
	string id;
	string name;
	string birthday;
	string gender;
	double mark;
};

int main(){
	//Khai bao bien hs1 co kieu du lieu la struct
	HocSinh hs1;
	//Khai bao mang hs co kieu du lieu la struct
	HocSinh hs[5];
	//Nhap thong tin cho hs1: id, name, birthday, gender, mark
	cout << "hs1 id: ";
	cin >> hs1.id;
	cout << "hs1 name: ";
	cin.ignore();
	getline(cin, hs1.name);
	cout << "hs1 birthday: ";
	cin >> hs1.birthday;
	cout << "hs1 gender: ";
	cin >> hs1.gender;
	cout << "hs1 mark: ";
	cin >> hs1.mark;
	
	//Hien thi
	cout << "Thong tin cua hs 1: " << endl;
	cout << "hs1 id: " << hs1.id << endl;
	cout << "hs1 name: " << hs1.name << endl;
	cout << "hs1 birthday: " << hs1.birthday << endl;
	cout << "hs1 gender: " << hs1.gender << endl;
	cout << "hs1 mark: " << hs1.mark << endl;
	
	//Nhap thong tin cho mang hs
	for(int i = 0; i < 5; i++){
		cout << "hs[" << i << "]:" << endl;
		cout << "id: ";
		cin >> hs[i].id;
		cout << "name: ";
		cin.ignore();
		getline(cin, hs[i].name);
		cout << "birthday: ";
		cin >> hs[i].birthday;
		cout << "gender: ";
		cin >> hs[i].gender;
		cout << "mark: ";
		cin >> hs[i].mark;
	}
	
	return 0;
}
