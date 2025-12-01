/*
	8. Nhap mang so thuc co n phan tu.
	Sap xep mang theo chieu tang dan
*/

#include <iostream>
using namespace std;

int main (){
	int n;
	cout << " nhap so n: ";
	cin >> n;
	float a[n];
	for (int i = 0; i < n; i++){
		cout << " nhap so thuc thu " << i << ": ";
		cin >> a[i];
	}
	
	float tg;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tg = a[j];
				a[j] = a[i];
				a[i] = tg;
			}
		}
	}
	cout << "Mang sau khi sap xep: " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
