/*
	9. Nhap mang so nguyen co n phan tu.
	Tim phan tu co gia tri lon thu 2 trong mang
*/
#include <iostream>
using namespace std;

int main () {
	int n;
	cout << " so phan tu";
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	cin >> a[i];
	
	int max1 = a[0], max2 = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max1) {
			max2 = max1;
			max1 = a[i];
		} else if (a[i] > max2 && a[i] != max1) {
			max2 = a[i];
		}
	}
	cout << " gia tri lon thu hai: " << max2 << endl;
	return 0;
}
