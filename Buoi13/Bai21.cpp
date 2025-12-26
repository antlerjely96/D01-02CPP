/*
	21. Nhap mang so nguyen co n phan tu.
	Tim phan tu co gia tri lon thu 2 trong mang
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

void hienThi(int n){
	cout << "Phan tu co gia tri lon thu 2: " << n << endl;
}

void timPhanTuLonThu2(int n, int arr[]){
	int max = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] < max){
			hienThi(arr[i]);
			break;
		}
	}
	return;
}

void sapXep(int n, int arr[]){
	double temp;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	timPhanTuLonThu2(n, arr);
	return;
}

int main(){
	cout << "n = ";
	int n = nhap();
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		arr[i] = nhap();
	}
	sapXep(n, arr);
	return 0;
}
