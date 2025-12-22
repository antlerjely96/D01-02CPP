/* 
	1. Nhap n so nguyen tu ban phim. Hien thi n so do
*/

#include <iostream>
using namespace std;

int nhapN(){
	int n;
	cin >> n;
	return n;
}

//Ham co mang arr la tham so
void hienThiMang(int n, int arr[]){
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = " << arr[i] << "\t";
	}
	return;
}

int main(){
	cout << "Nhap so phan tu: ";
	int n = nhapN();
	//Do khong the return 1 mang => nhap mang nam trong main
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Goi hienThiMang
	hienThiMang(n, arr);
	return 0;
}
