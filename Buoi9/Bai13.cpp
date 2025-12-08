/*
	13. Nhap mang so thuc co n phan tu.
	Nhap so nguyen k.
	Xoa phan tu co index = k khoi mang.
*/

#include <iostream>
using namespace std;

int main(){
	int n;
	int k;
	//Nhap n
	do {
		cout << "n = ";
		cin >> n;
		if(n < 0){
			cout << "n phai lon hon 0" << endl;
		}
	} while(n < 0);
	//Khai bao mang
	int arr[n], temp[n - 1];
	//Nhap mang
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Nhap k
	do{
		cout << "k = ";
		cin >> k;
		if(k < 0 || k >= n){
			cout << "Nhap lai" << endl;
		}
	} while(k < 0 || k >= n);
	//
	for(int i = 0; i < k; i++){
		temp[i] = arr[i];
	}
	for(int i = k; i < n - 1; i++){
		temp[i] = arr[i + 1];
	}
	//In ra
	for(int i = 0; i < n - 1; i++){
		cout << temp[i] << "\t";
	}
	return 0;
}
