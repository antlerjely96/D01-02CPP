/*
	3. Nhap so nguyen n tu ban phim.
	Hien thi cac so chan trong khoang tu 1 den n
*/
#include <iostream>
using namespace std;
int main (){
	int n;
	cout << "nhap so n la: " << endl;
	cin >> n;
	int i;
	i = 1;
	while (i < n){
		if (i % 2 == 0){
			cout << i << endl;
		}
		i++;
	}
	return 0;
}
