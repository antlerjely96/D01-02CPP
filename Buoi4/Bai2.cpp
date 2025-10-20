/*
	2. Nhap so nguyen n tu ban phim.
	Hien thi cac so tu 1 den n
*/
#include <iostream>
using namespace std;

int main(){
	//Khai bao n
	int n;
	//Nhap n
	cout << " Nhap gioi han = ";
	cin >> n;
	//Vòng lap
	int i;
	for( i = 1 ; i < n; i++){
		cout << i << endl;
	}
	return 0;
}
