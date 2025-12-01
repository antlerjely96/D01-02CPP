/*
	10. Nhap mang co n so nguyen.
	Tach mang tren thanh 2 mang rieng biet:
		- 1 mang chua cac phan tu co gia tri chan
		- 1 mang chua cac phan tu co gia tri le
	Goi y:
	B1: Nhap mang
	B2: dem so phan tu chan, dem so phan tu le
	B3: tao 2 mang dua theo so phan tu, tao cac bien dem cho tung mang
	B4: Copy gia tri tuong ung vao tung mang
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "nhap so phan tu cua mang: ";
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> a[i];
	}
	int soSoChan = 0, soSoLe = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			soSoChan++;
		} else {
			soSoLe++;
		}
	}
	if(soSoChan > 0 && soSoLe > 0){
		int mangSoChan[soSoChan];
		int mangSoLe[soSoLe];
		int k = 0, m = 0;
		for(int i = 0; i < n; i++){
			if(a[i] % 2 == 0){
				mangSoChan[k] = a[i];
				k++;
			} else {
				mangSoLe[m] = a[i];
				m++;
			}
		}
		cout << "Mang so chan: ";
		for(int i = 0; i < soSoChan; i++){
			cout << mangSoChan[i] << "\t";
		}
		cout << endl;
		cout << "Mang so le: ";
		for(int i = 0; i < soSoLe; i++){
			cout << mangSoLe[i] << "\t";
		}
		cout << endl;
	} else if(soSoChan > 0 && soSoLe == 0){
		int mangSoChan[soSoChan];
		for(int i = 0; i < n; i++){
			mangSoChan[i] = a[i];
		}
		cout << "Mang so chan: ";
		for(int i = 0; i < soSoChan; i++){
			cout << mangSoChan[i] << "\t";
		}
		cout << endl;
	} else if(soSoChan == 0 && soSoLe > 0){
		int mangSoLe[soSoLe];
		for(int i = 0; i < n; i++){
			mangSoLe[i] = a[i];
		}
		cout << "Mang so le: ";
		for(int i = 0; i < soSoLe; i++){
			cout << mangSoLe[i] << "\t";
		}
		cout << endl;
	}
	return 0;
}
