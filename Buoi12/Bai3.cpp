/*
	3. Nhap so nguyen n tu ban phim. Dung de quy tinh tong cac so tu 1 den n
*/
#include <iostream>
using namespace std;
 
 int nhap(){
 	int n;
 	cin >> n;
 	return n;
 }
 int tong(int n){
 	if(n <= 1){
 		return 1;
	 }
	 return n + tong(n - 1);
 }
 int main(){
 	int n = nhap();
 	int t = tong(n);
 	cout << "Tong =" << t <<endl;
 	return 0;
 }
