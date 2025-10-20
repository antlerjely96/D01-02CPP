/*
	4. Nhap 1 so nguyen. Hien thi nhu sau
	1 => Chu nhat
	2 => Thu hai
	3 => Thu ba
	...
	7 => Thu bay
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao bien
	int thu;
	//Nhap bien
	cout << "Thu: ";
	cin >> thu;
	//Kiem tra (if - else)
	if(thu == 1){
		cout << "Chu nhat" << endl;
	} else if(thu == 2){
		cout << "Thu hai" << endl;
	} else if(thu == 3){
		cout << "Thu ba" << endl;
	} else if(thu == 4){
		cout << "Thu tu" << endl;
	} else if(thu == 5){
		cout << "Thu nam" << endl;
	} else if(thu == 6){
		cout << "Thu sau" << endl;
	} else if(thu == 7){
		cout << "Thu bay" << endl;
	} else {
		cout << "Khong ton tai!" << endl;
	}
	
	//switch - case
	switch(thu){
		case 1:
			cout << "Chu nhat" << endl;
			break;
		case 2:
			cout << "Thu hai" << endl;
			break;
		case 3:
			cout << "Thu ba" << endl;
			break;
		case 4:
			cout << "Thu tu" << endl;
			break;
		case 5:
			cout << "Thu nam" << endl;
			break;
		case 6:
			cout << "Thu sau" << endl;
			break;
		case 7:
			cout << "Thu bay" << endl;
			break;
		default:
			cout << "Khong ton tai" << endl;
			break;
	}
	return 0;
}
