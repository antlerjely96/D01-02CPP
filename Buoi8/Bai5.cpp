/*
	5. Nhap mang so thuc co n phan tu.
	Dem so phan tu co gia tri duong trong mang.
*/
#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "n = ";
	cin >> n;
	
	int dem = 0;
	float a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] > 0){
			cout << a[i] << " ";
			dem++;
		}
	}
	cout << "so duong co trong mang la : " << dem << endl;
	return 0;
}
