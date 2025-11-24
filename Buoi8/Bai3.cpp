/*
	3. Nhap mang so thuc co n phan tu, n nhap tu ban phim.
	Tinh tong gia tri cua cac phan tu trong mang.
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "n = ";
	cin >> n;
	int arr[n];
	int tong = 0;
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] =" << "";
		cin >> arr[i];
		tong += arr[i];
	}
	cout << "Tong cac gia tri phan tu la =" << tong << endl;
	return 0;
}
