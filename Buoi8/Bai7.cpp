/*
	7. Nhap mang so thuc co n phan tu.
	Tim max, min
*/
#include <iostream>
using namespace std;

int main () {
	int n;
	cout <<"so phan tu :";
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ;i++){
		cout << " a[" << i << "] = ";
		cin >> a[i];
	}
	int max = a[0];
	int min = a[0];
	for( int i = 0 ; i < n ; i++){
		if( a[i] < min ) min = a[i];
		if( a[i] > max ) max = a[i];
	}
	cout << " Min =" << min << endl;
	cout << " Max =" << max << endl;
	return 0;
	}
