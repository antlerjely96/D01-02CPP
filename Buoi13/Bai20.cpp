/*
	20. Nhap mang so thuc co n phan tu.
	Sap xep mang theo chieu tang dan
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

void hienThi(int n, double arr[]){
	for(int i = 0; i < n; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
	return;
}

void sapXep(int n, double arr[]){
	double temp;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	hienThi(n, arr);
	return;
}

int main(){
	cout << "n = ";
	int n = nhap();
	double arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	sapXep(n, arr);
	return 0;
}
