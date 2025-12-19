/*
	5. Nhap so nguyen n tu ban phim.
	Hien thi n so dau tien cua day fibonacci.
	Note: Nen dung de quy
*/
#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}
int fibo(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	return fibo(n - 1) + fibo(n - 2);
}
int main(){
	int n = nhap();
	for(int i = 0;i < n; i++){
		cout << fibo(i) << " ";
	}
	return 0;
}
