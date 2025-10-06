// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int thu;
    //Nhap thu
    cout << "Hom nay la thu may: ";
    cin >> thu;
    //Kiem tra hom nay la thu may
    if(thu == 2){
    	//Thuc hien khi thu == 2 tra ve true
        cout << "Hoc C++";
    } else if(thu == 3 || thu == 5){
    	/* Thuc hien khi thu == 2 tra ve false
		thu == 3 || thu == 5 tra ve true*/
        cout << "Hoc CMS";
    } else if(thu == 4){
    	/* Thuc hien khi thu == 2, thu == 3 || thu == 5 tra ve false
		thu == 4 tra ve true*/
        cout << "Hoc Tieng Anh";
    } else if(thu == 6){
    	/* Thuc hien khi thu == 2, thu == 3 || thu == 5, thu == 4 tra ve false
		thu == 6 tra ve true*/
        cout << "Hoc Phap luat";
    } else {
    	/* Thuc hien khi tat ca cac dieu kien ben tren tra ve false */
        cout << "Ði choi";
    }
}
