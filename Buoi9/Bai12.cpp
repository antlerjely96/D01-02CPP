/*
	12. Nhap mang so nguyen co n phan tu.
	Hien thi tat ca cac phan tu la so nguyen to trong mang
*/
#include <iostream>
using namespace std;

int main(){
	//Khai bao va nhap n
	int n;
	cout <<"nhap n: ";
	cin >> n;
	//Khai bao count
	int count;
	//Khai bao mang
	int arr[n];
	//Nhap mang
	cout << "nhap mang: " << endl;
	for (int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	//Duyet qua tung phan tu
	for(int i = 0; i < n; i++){
		//Kiem tra tung phan tu
		if(arr[i] > 1){
			count = 0;
			for(int j = 2; j < arr[i]; j++){
				if(arr[i] % j == 0){
					count++;
				}
			}
			//Kiem tra count
			if(count == 0){
				cout << arr[i] << "\t";
			}
		}
	}
	return 0;
}
