/*
	9. Nhap so nguyen n tu ban phim
	Hien thi cac so nguyen to trong khoang tu 1 den n
	Goi y: dùng nested loop de kiem tra i co phai so nguyen to khong
*/
#include<iostream>
using namespace std;
int main(){
	//Khai bao
	int n;
	//Nhap n
	cout << "Nhap n: ";
	cin >> n;
	/* C1 */
	cout << "-- C1 --" << endl;
	//Kiem tra n < 2 khong
	if(n < 2){
		cout << "Khong co so nguyen to den " << n << endl;
	} else {
		for(int i = 2; i <= n; i++){
			bool isprime = true;
			for(int j = 2; j * j <= i; j++){
				if (i % j == 0){
					isprime = false;
				}
			}
			if (isprime) {
				cout << i << "\t";
			}
		}
	}
	cout << endl;
	/* C2 */
	cout << "-- C2 --" << endl;
	int dem;
	//Kiem tra
	if(n < 2){
		cout << "Khong co so nguyen to den " << n << endl;
	} else {
		//Vong lap tu 2 den n
		for(int i = 2; i <= n; i++){
			dem = 0;
			//Vong lap tu 2 den i
			for(int j = 2; j < i; j++){
				//Kiem tra i co chia het cho j khong
				if(i % j == 0){
					dem++;
				}
			}
			//Kiem tra dem
			if(dem == 0){
				cout << i << "\t";
			}
		}
	}
	return 0;
}
