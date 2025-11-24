/*
	2. Nhap mang co 10 so nguyen.
	Hien thi cac phan tu co gia tri chan
*/
#include <iostream>
using namespace std;
int main(){
	//Khai bao mang
	int arr[10];
	//Nhap mang
	for(int i = 0 ; i < 10; i++){
		cout << "arr[ " << i << " ] = ";
		cin >> arr[i];
	}
	//Hien thi phan tu co gia tri chan
	for(int i = 0 ; i < 10; i++){
		if( arr[i] % 2 == 0){
			cout << "arr[" << i << "] = " << arr[i] << "\t";
		}
	cout << endl;
	}
	return 0;
}
