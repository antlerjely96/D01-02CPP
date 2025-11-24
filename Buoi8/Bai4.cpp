/*
	4. Nhap mang so nguyen co n phan tu, n nhap tu ban phim
	Tinh tich cac phan tu co gia tri chia het cho 5 hoac 7 trong mang
*/
#include <iostream>
using namespace std;

int main(){
	//Khai bao n
	int n;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Khai bao mang
	int arr[n];
	//Nhap mang
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Khai bao tich
	int tich = 1;
	//Tinh
	for(int i = 0; i < n; i++){
		if(arr[i] % 5 == 0 || arr[i] % 7 == 0){
			tich *= arr[i];
		}
	}
	//Hien thi
	cout << "tich cac phan tu chia het cho 5 hoac 7 la: " << tich << endl;
	return 0;
}

