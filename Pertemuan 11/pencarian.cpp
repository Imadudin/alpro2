#include <iostream>
using namespace std;

int main(){
	int ukuranX, i=1;
	int s;

	cout << "Masukan ukuran array: ";
	cin >> ukuranX;

	int X [ukuranX];

	for (int j=1; j <= ukuranX; j++){
		cout << "Masukan data ke " << j << " : ";
		cin >> X[j];
	}

	cout << "Masukan data yang dicari: ";
	cin >> s;

	while (i < ukuranX && X[i] != s)
		i++;

	if (X[i] == s)
		cout << "Data ditemukan pada elemen ke " << i << endl;
	
	else
		cout << "Data tidak ditemukan"<< endl;

	return 0;
}
