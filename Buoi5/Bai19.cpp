/*
	19. Ve hinh
	1	2	3	4	5
	10	9	8	7	6
	11	12	13	14	15
	20	19	18	17	16
*/

#include <iostream>
using namespace std;
int main (){
	int i, j, k, n;
	for (i = 0;i <= 3; i++){
		j = 1 + i * 5;
		k = 5 + i * 5;
		if (i % 2 == 0){
			for (n = j; n <= k; n++){
				cout << n << "\t";
			}
		}else{
		    for (n = k; n >= j; n--){
		    	cout << n << "\t";
			}
		}
		cout << endl;
	}
	return 0;
}
