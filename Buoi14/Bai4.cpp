/*
	4. Nhap thong tin cho n SinhVien, n nhap tu ban phim.
	Thong tin cua 1 sinh vien gom: id, name, dob, gpa
	Hien thi thong tin nhung sinh vien co gpa thap nhat
*/

#include <iostream>
#include <cstring>
using namespace std;

struct SinhVien{
	string id;
	string name;
	string dob;
	double gpa;
};

int nhap(){
	int n;
	cin >> n;
	return n;
}

double minGpa(int n, SinhVien sv[]){
	double min = sv[0].gpa;
	for(int i = 0; i < n; i++){
		if(sv[i].gpa < min){
			min = sv[i].gpa;
		}
	}
	return min;
}

void hienThi(double min, int n, SinhVien sv[]){
	for(int i = 0; i < n; i++){
		if(sv[i].gpa == min){
			cout << "Nhap thong tin cho sinh vien thu: " << i + 1 << endl;
			cout << "Id: " << sv[i].id << endl;
			cout << "Name: " << sv[i].name << endl;
			cout << "Dob: " << sv[i].dob << endl;
			cout << "gpa: " << sv[i].gpa << endl;
		}
	}
	return;
}

int main(){
	cout << "n = ";
	int n = nhap();
	SinhVien sv[n];
	for(int i = 0; i < n; i++){
		cout << "Nhap thong tin cho sinh vien thu: " << i + 1 << endl;
		cout << "Id: ";
		cin >> sv[i].id;
		cout << "Name: ";
		cin.ignore();
		getline(cin, sv[i].name);
		cout << "Dob: ";
		getline(cin, sv[i].dob);
		cout << "gpa: ";
		cin >> sv[i].gpa;
	}
	hienThi(minGpa(n, sv), n, sv);
	return 0;
}
