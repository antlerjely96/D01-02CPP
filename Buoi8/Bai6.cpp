/*
	6. Nhap mang so nguyen co n phan tu.
	Nhap so nguyen x tu ban phim.
	Dem so lan x xuat hien trong mang
*/
#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> a[i];
	}
	int x;
	cout << "Nhap so nguyen x: ";
	cin >> x;
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			dem++;
		}
	}
	cout << "So lan x xuat hien trong mang la: " << dem << endl;
	return 0;
}
