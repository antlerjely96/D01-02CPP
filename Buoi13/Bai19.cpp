/*
	19. Nhap mang so thuc co n phan tu.
	Tim max, min
*/

#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}

double timMax(int n, double arr[]){
	double max = arr[0];
	for(int i = 0; i < n; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	return max;
}

double timMin(int n, int arr[]){
	double min = arr[0];
	for(int i = 0; i < n; i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int main(){
	cout << "n = ";
	int n = nhap();
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "max = " << timMax(n, arr) << endl;
	cout << "min = " << timMin(n, arr) << endl;
}
