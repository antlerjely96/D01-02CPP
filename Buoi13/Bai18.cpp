/*
	18. Nhap mang so nguyen co n phan tu.
	Nhap so nguyen x tu ban phim.
	Dem so lan x xuat hien trong mang
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

int demSoLanXuatHien(int n, int arr[], int x){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == x){
			dem++;
		}
	}
	return dem;
}

int main(){
	cout << "n = ";
	int n = nhap();
	for(int i = 0; i < n; i+){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "x = ";
	int x = nhap();
	cout << "So lan xua hien cua x trong mang: " << demSoLanXuatHien(n, arr, x) << endl;
}
