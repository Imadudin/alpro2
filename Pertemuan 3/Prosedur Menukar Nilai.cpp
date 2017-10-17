#include <iostream>

using namespace std;


void ProsesMembaca();
void ProsesMenukar();
void ProsesMenampilkan();


int a, b, c , temp;


int main() {
	ProsesMembaca();
	ProsesMenukar();
	ProsesMenampilkan();
	return 0;
}


void ProsesMembaca() {
	cout << "========================" << endl;
	cout << "Masukkan nilai A : ";
	cin >> a;
	
	cout << "Masukkan nilai B : ";
	cin >> b;
	
	cout << "Masukkan nilai C : ";
	cin >> c;}


void ProsesMenukar() {
	temp = b;
	b = a;
	a = c;
	c = temp;
}


void ProsesMenampilkan() {
	cout << "========================" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b << endl;
	cout << "Nilai C sekarang : " << c;
	
}
