/*
	6. Nhap 3 so nguyen a, b, c.
	Hien thi so lon nhat va so nho nhat trong 3 so
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao a, b, c
	int a;
	int b;
	int c;
	//Nhap a
	cout << "a = ";
	cin >> a;
	//Nhap b
	cout << "b = ";
	cin >> b;
	//Nhap c
	cout << "c = ";
	cin >> c;
	//Khai bao max = a
	int max = a;
	//Kiem tra
	if(max < b){
		max = b;
	}
	if(max < c){
		max = c;
	}
	cout << "max = " << max << endl;
	//Khai bao min = a
	int min = a;
	//Kiem tra
	if(min > b){
		min = b;
	}
	if(min > c){
		min = c;
	}
	cout << "min = " << min << endl;
	return 0;
}
