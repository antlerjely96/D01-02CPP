/*
	11. Nhap mang so nguyen co n phan tu.
	Nhap 2 so nguyen m, k.
	Chen gia tri m vao vi tri co index = k trong mang
*/

#include <iostream>
using namespace std;

int main()
{
	//Khai bao
	int n;
	int m;
	int k;
	//Nhap n
	do {
		cout << "n = ";
		cin >> n;
		if(n <= 0){
			cout << "Mang phai co it nhat 1 phan tu" << endl;
		}
	} while(n <= 0);
	//Khai bao 2 mang
	int arr[n], temp[n + 1];
	//Nhap mang
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Nhap m, k
	cout << "m = ";
	cin >> m;
	do {
		cout << "k = ";
		cin >> k;
		if(k < 0 || k >= n){
			cout << "Nhap sai index!" << endl;
		}
	} while(k < 0 || k >= n);
	//Vong lap chay tu 0 -> k
	for(int i = 0; i < k; i++){
		temp[i] = arr[i];
	}
	temp[k] = m;
	//Vong lap chay k + 1 -> n + 1
	for(int i = k; i < n + 1; i++){
		temp[i + 1] = arr[i];
	}
	//In ket qua
	cout << "Mang sau khi chen: ";
	for(int i = 0; i < n + 1; i++){
		cout << temp[i] << "\t";		
	}
	cout << endl;
	return 0;
}

