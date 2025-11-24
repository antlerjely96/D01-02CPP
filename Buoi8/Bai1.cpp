/*
	1. Nhap 10 so nguyen tu ban phim. Hien thi 10 so do.
	=> 1 mang co 10 so nguyen.
	=> Mang so nguyen co 10 phan tu
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao mang
	int arr[10];
	//Nhap gia tri cho cac phan tu
	for(int i = 0; i < 10; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Hien thi lan luot tat ca cac phan tu trong mang
	for(int i = 0; i < 10; i++){
		cout << "arr[" << i << "] = " << arr[i] << "\t";
	}
	cout << endl;
	return 0;
}
