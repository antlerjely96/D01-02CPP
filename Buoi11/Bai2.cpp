/*
	2. Nhap 3 so nguyen x, y, z. Tính
		a. x + y + z
		b. x * y * z
		c. x^2 + y^2 - z^2
		d. x^3 / y^2 * z
		e. x / y / z
		f. (x + y) - (x + z) - (y + z)
		g. (x * y) / (x + y + z)
		h. (x + y + z) / 3
*/
#include <iostream>
using namespace std;

int nhap(){
	int n;
	cin >> n;
	return n;
}
void tinhA (int x, int y, int z){
	int a = x + y + z;
	cout << "A = " << a << endl;
	return;
}
void tinhB (int x, int y, int z){
	int b = x * y * z;
	cout << "B = " << b << endl;
	return;
}
void tinhC (int x, int y, int z){
	int c = x * x + y * y - z * z;
	cout << "C = " << c << endl;
	return;
}
void tinhD (int x, int y, int z){
	int d = x * x * x / y * y * z;
	cout << "D = " << d << endl;
	return;
}
void tinhE (int x, int y, int z){
	int e = x / y / z;
	cout << "E = " << e << endl;
	return;
}
void tinhF(int x, int y, int z){
	int f = (x + y) - (x + z) - (y + z);
	cout << "F = "<< f << endl;
	return;
}
void tinhG (int x, int y, int z){
	int g = (x * y) / (x + y + z);
	cout << "G = "<< g << endl;
	return;
}
void tinhH (int x, int y, int z){
	int h = (x + y + z) / 3;
	cout << "H = " << h << endl;
	return ;
}
int main(){
	int x, y, z;
	x = nhap();
	y = nhap();
	z = nhap();
	tinhA(x, y, z);
	tinhB(x, y, z);
	tinhC(x, y, z);
	tinhD(x, y, z);
	tinhE(x, y, z);
	tinhF(x, y, z);
	tinhG(x, y, z);
	tinhH(x, y, z);
	return 0;
}
