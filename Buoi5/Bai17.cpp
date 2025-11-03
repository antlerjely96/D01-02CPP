/*
	17. Ve hinh
	    1
	   121
	  12321
	 1234321
	123454321
*/

#include <iostream>
using namespace std;

int main(){
	for(int i = 1; i <= 5; i++){
		for(int j = i; j < 5; j++){
			cout << " ";
		}
		for(int k = 1; k <= i; k++){
			cout << k;
		}
		for(int m = i - 1; m >= 1; m--){
			cout << m;
		}
		cout << endl;
	}
	return 0;
}
