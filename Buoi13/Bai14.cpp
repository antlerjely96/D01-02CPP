/*
	14. Nhap mang co n so nguyen.
	Hien thi cac phan tu co gia tri chan.
*/
#include <iostream>
using namespace std;
int Nhap(){
	int n;
	cin >> n;
	return n;
}
void hienThiMang(int n, int arr[]){
	for(int i = 0;i < n;i++){
		if(arr[i] % 2 ==0){
			cout << "arr[" << i << "] ="<< arr[i] << "\t";
		}
	}
	return;
}
int main(){
	cout << "Nhap vao so phan tu";
	int n = Nhap();
	int arr[n];
	for(int i = 0;i < n ;i++){
		cout << "arr[" << i << "] =";
		cin >> arr[i];
	}
	hienThiMang(n, arr);
	return 0;
}
