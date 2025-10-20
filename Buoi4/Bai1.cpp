/*
	1. In ra so nguyen tu 1 den 50
*/

#include <iostream>
using namespace std;

int main(){
	/* for */
	int i;
	cout << "-- for --" << endl;
	for(i = 1; i < 51; i++){
		cout << i << endl;
	}
	
	/* while */
	cout << "-- while --" << endl;
	i = 1;
	while(i < 51){
		cout << i << endl;
		i++;
	}
	
	/* do - while */
	cout << "-- do - while --" << endl;
	i = 1;
	do {
		cout << i << endl;
		i++;
	} while(i < 51);
	return 0;
}
