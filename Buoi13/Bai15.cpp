/*
	15. Nhap mang so thuc co n phan tu, n nhap tu ban phim.
	Tinh tong gia tri cua cac phan tu trong mang.
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

float tinhtong( int n , int ar[] ){
	cout << " tong cac gia tri cua phan tu : ";
	int tong = 0;
	for( int i = 0 ; i < n ; i++){
		tong += ar[i];
	}
	return tong;
}

int main(){
	cout << " nhap so phan tu mang : ";
	int n = nhap();
	int arr[n];
	for( int i = 0 ; i < n ; i++){
		cout << " arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << tinhtong( n , arr );
	return 0;
}
