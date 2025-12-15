/*
	5. Nhap 1 so nguyen.
	Kiem tra so nguyen do la so chan hay le
	Goi ý: a % 2 == 0
*/
#include <iostream>
using namespace std;
int nhap(){
	int n;
	cin >> n;
	return n;
}
void kiemTraLaSoAmHayDuong (int a) {
	if(a % 2 == 0){
		cout << " La so chan" << endl ;
	}
	else{
		cout << " La so am " << endl ;
	}
}
int main(){
	int a;
	a = nhap();
	kiemTraLaSoAmHayDuong(a);
	return 0;
	
	
}
