
#include <iostream>
using namespace std;

int main(){
	int a,i;	//mendeklarasikan variabel

	cout << "masukan angka kelipatan = ";	// meminta user menginputkan angka
	cin >> a;	//menyimpan input

	for (i = a ; i <=100; i += a){	// statement untuk melakukan pengulangan
		cout << i << ", ";	// mengeluarkan nilai i
	}

	return 0;
}
