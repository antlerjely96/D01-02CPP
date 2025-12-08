/*
	14. Nhap 2 mang so thuc.
	Mang1 co n phan tu, Mang2 co m phan tu.
	Gop 2 mang lai thanh 1
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout << " nhap so phan tu mang 1: ";
	cin >> n;
	float mang1[n];
	int m;
	cout << " nhap so phan tu mang 2: ";
	cin >> m;
	float mang2[m];
	
	for( int i = 0 ; i < n ; i++){
		cout << " arr[" << i << "] = ";
		cin >> mang1[i];
		
	for( int i = 0 ; i < m ; i++){
		cout << " temp[" << i << "] = ";
		cin >> mang2[i];
	}
	float temp[n + m];
	for(int i = 0; i < n; i++){
		temp[i] = mang1[i];
	}
	for(int i = 0; i < m; i++){
		temp[n + i] = mang2[i];
	}
	//In ket qua
	for(int i = 0; i < n + m; i++){
		cout << temp[i] << "\t";
	}
	return 0;
}


