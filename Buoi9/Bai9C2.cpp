/*
	9. Nhap mang so nguyen co n phan tu.
	Tim phan tu co gia tri lon thu 2 trong mang
*/

#include <iostream>
using namespace std;

int main(){
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
	//Chay vong lap
	for(int i = n - 1; i >= 0; i--){
		if(a[i] < a[n - 1]){
			cout << a[i] << endl;
			break;
		}
	}
	return 0;
}
