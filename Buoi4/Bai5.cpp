/*
	5. Nhap so nguyen n tu ban phim.
	Tinh tong cac so chia het cho 3 hoac 7 trong khoang tu 1 den n
*/
#include <iostream>
using namespace std;

int main(){
	int n, sum = 0;
	cout << "n = ";
	cin >> n;
	for (int i = 1; i <= n; i++){
		if (i % 3 == 0 || i % 7 == 0){
	    	sum += i;
		}
	}
	cout << "sum = " << sum << endl;
	return 0;       
}
