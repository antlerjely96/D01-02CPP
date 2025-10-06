/*
	2. Nhap so nguyen a tu ban phim.
	Kiem tra a la so chan hay so le
	Goi y: so chan la so chia cho 2 du 0
		so le la so chia cho 2 du 1
		Toan tu chia lay du: %
			Vi du: kiem tra a chia cho 5 co du 3 hay khong: a % 5 == 3
 */
 
#include <iostream>
using namespace std;
 
int main(){
 	//Khai bao so nguyen
 	int a;
 	//Nhap a
 	cout << "a = ";
 	cin >> a;
 	//Kiem tra a % 2 == 0?
 	if(a % 2 == 0){
 		//Thuc hien khi a % 2 == 0 tra ve true
 		cout << "a la so chan" << endl;
	} else {
		//Thuc hien khi a % 2 == 0 tra ve false
		cout << "a la so le" << endl;
	}
 	return 0;
 }
