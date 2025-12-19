/*
	2. In ra so nguyen tu 1 den n voi n nhap tu ban phim. Dung de quy
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

int hienThi(int n){
	if(n < 1){
		return n;
	}
	cout << n << "\t";
	return hienThi(n - 1);
}

int main(){
	int n = nhap();
	hienThi(n);
	return 0;
}
