/*
	16. Nhap mang so nguyen co n phan tu, n nhap tu ban phim
	Tinh tich cac phan tu co gia tri chia het cho 5 hoac 7 trong mang
*/

#include <iostream>
using namespace std;

int nhapN(){
	int n;
	cin >> n;
	return n;
}

long int tinhTichCacPhanTuChiaHetCho5Hoac7(int n, int arr[]){
	long int tich = 1;
	for(int i = 0; i < n; i++){
		if(arr[i] % 5 == 0 || arr[i] % 7 == 0){
			tich *= arr[i];
		}
	}
	return tich;
}

int main(){
	cout << "n = ";
	int n = nhapN();
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "Tich cac phan tu chia het cho 5 hoac 7: " << tinhTichCacPhanTuChiaHetCho5Hoac7(n, arr) << endl;
	return 0;
}
