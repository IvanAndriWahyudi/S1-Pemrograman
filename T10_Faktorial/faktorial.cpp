#include <iostream>

using namespace std;

int main(){
	int bil, angka;
	long int hasil =1 ;

	cout << "Masukan Angka = ";
	cin >> angka;

	for (bil = angka ; bil >= 1 ; bil --){
		hasil = hasil * bil;

	}
	cout << "Hasil " << angka << "! = " << hasil << endl;

 return 0;
}