/*
	3. Nhap 3 so thuc tu ban phim.
	Kiem tra 3 so do co phai canh cua 1 tam giac hay khong
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao 3 so a, b, c
	float a;
	float b;
	float c;
	//Nhap a
	cout << "a = ";
	cin >> a;
	//Nhap b
	cout << "b = ";
	cin >> b;
	//Nhap c
	cout << "c = ";
	cin >> c;
	//Kiem tra
	if(a > 0 && b > 0 && c > 0){
		if(a + b > c && a + c > b && b + c > a){
			cout << "a, b, c la 3 canh tam giac" << endl;
		} else {
			cout << "a, b, c khong la 3 canh tam giac" << endl;
		}
	} else {
		cout << "a, b, c khong la 3 canh tam giac" << endl;
	}
}
