/*
	5. Nhap thong tin cua n san pham dien thoai.
	Thong tin cua 1 dien thoai gom: id, name, brand
		color, ram, memory, chip, camera front, camera back,
		screen size, screen type, battery, phone size, price,
		sold quantity.
	a. Hien thi thong tin cac san pham
	b. Hien thi thong tin san pham co price lon nhat
	c. Tinh tong tien da ban cua tung san pham
	d. Hien thi thong tin san pham có tong tien ban cao nhat
	e. Sap xep cac san pham theo gia ban tang dan
*/

#include <iostream>
#include <cstring>

using namespace std;

struct DienThoai{
	string id;
	string name;
	string brand;
	string color;
	int ram;
	int memory;
	string chip;
	string cameraFront;
	string cameraBack;
	double screenSize;
	string screenType;
	int battery;
	string phoneSize;
	double price;
	int soldQuantity;
	double totalSoldValue;
};

int nhap(){
	int n;
	cin >> n;
	return n;
}

void hienThi(DienThoai dt){
	cout << "Thong tin cua dien thoai thu " << i + 1 << endl;
	cout << "Id: " << dt.id << endl;
	cout << "Name: " << dt.name << endl;
	cout << "Brand: " << dt.brand << endl;
	cout << "Color: "<< dt.color << endl;
	cout << "Ram (GB): " << dt.ram << endl;
	cout << "Memory (GB): " << dt.memory << endl;
	cout << "Chip: " << dt.chip << endl;
	cout << "Front camera: " << dt.cameraFront << endl;
	cout << "Back camera: " << dt.cameraBack << endl;
	cout << "Screen size: " << dt.screenSize << endl;
	cout << "Screen Type: " << dt.screenType << endl;
	cout << "Battery (mAh): " << dt.battery << endl;
	cout << "Phone size: " << dt.phoneSize << endl;
	cout << "Price: " << dt.price << endl;
	cout << "Sold Quantity: " << dt.soldQuantity << endl;
	return;
}

void maxPrice(int n, DienThoai dt[]){
	double max = dt[0].price;
	for(int i = 0; i < n; i++){
		if(max < dt[i].price){
			max = dt[i].price;
		}
	}
	for(int i = 0; i < n; i++){
		if(dt[i].price == max){
			hienThi(dt[i]);
		}
	}
	return;
}

void maxValue(int n, DienThoai dt[]){
	int max = dt[0].totalSoldValue;
	for(int i =0; i < n; i++){
		if(max < dt[i].totalSoldValue){
			max = dt[i].totalSoldValue;
		}
	}
	for(int i = 0; i < n; i++){
		if(dt[i].totalSoldValue == max){
			hienThi(dt[i]);
		}
	}
	return;
}

void sapXep(int n, DienThoai dt[]){
	DienThoai temp;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(dt[i].price > dt[j].price){
				temp = dt[i];
				dt[i] = dt[j];
				dt[j] = temp;
			}
		}
	}
	cout << "Mang sau sap xep!" << endl;
	for(int i = 0; i < n; i++){
		hienThi(dt[i]);
	}
}

int main(){
	cout << "n = ";
	int n = nhap();
	DienThoai dt[n];
	for(int i = 0; i < n; i++){
		cout << "Nhap thong tin cua dien thoai thu " << i + 1 << endl;
		cout << "Id: ";
		cin >> dt[i].id;
		cout << "Name: ";
		cin.ignore();
		getline(cin, dt[i].name);
		cout << "Brand: ";
		getline(cin, dt[i].brand);
		cout << "Color: ";
		getline(cin, dt[i].color);
		cout << "Ram (GB): ";
		cin >> dt[i].ram;
		cout << "Memory (GB): ";
		cin >> dt[i].memory;
		cout << "Chip: ";
		cin.ignore();
		getline(cin, dt[i].chip);
		cout << "Front camera: ";
		getline(cin, dt[i].cameraFront);
		cout << "Back camera: ";
		getline(cin, dt[i].cameraBack);
		cout << "Screen size: ";
		cin >> dt[i].screenSize;
		cout << "Screen Type: ";
		cin.ignore();
		getline(cin, dt[i].screenType);
		cout << "Battery (mAh): ";
		cin >> dt[i].battery;
		cout << "Phone size: ";
		cin.ignore();
		getline(cin, dt[i].phoneSize);
		cout << "Price: ";
		cin >> dt[i].price;
		cout << "Sold Quantity: ";
		cin >> dt[i].soldQuantity;
		dt[i].totalSoldValue = dt[i].price * dt[i].soldQuantity;
	}
	cout << "Thong tin cac san pham vua nhap" << endl;
	for(int i = 0; i < n; i++){
		hienThi(dt[i]);
	}
	
	cout << "Thong tin cac san pham co gia lon nhat: " << endl;
	maxPrice(n, dt);
	
	cout << "Thong tin cac san pham co tong tien ban lon nhat: " << endl;
	maxValue(n, dt);
	
	sapXep(n, dt);
}
