#include <iostream>
using namespace std;

int main(){
	for(int i = 1; i < 5; i++){
		cout << i << " | ";
		for(int j = 1; j < 3; j++){
			cout << j << "\t";
		}
		cout << endl;
	}
	return 0;
}
