/*
	6. Nhap so nguyen n. Tinh
	S = 1/1 + 1/2 + 1/3 + ... + 1/n
	Note: Nen dung de quy
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

double S(int n) {
	if (n == 1) return 1;
	return 1.0 / n + S(n - 1);
}
	
int main() {
	int n;
	cout <<"nhap n:";
	n = nhap();
	if (n < 1){
		cout << "khong hop le";
		return 0;
	}
	cout << S(n);
	return 0;
}	
