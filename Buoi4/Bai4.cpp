/*
	4. Nhap so nguyen n tu ban phim.
	Tinh n!
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao n
	int n;
	int giaiThua = 1;
	//Kiem tra
	if(n < 0){
		cout << "Khong ton tai giai thua cua so am" << endl;
	} else {
		//Vòng lap
		for(int i = 1; i <= n; i++){
			giaiThua *= i;
		}
		cout << "n! = " << giaiThua << endl;
	}
	return 0;
}
