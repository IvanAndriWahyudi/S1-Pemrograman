#include <iostream>
#include <string>

using namespace std;


int main(){

	
		string nama;
		int nilai[5];
		float jumlah, average;
		char ulang;
		int SIZE = sizeof(nilai)/sizeof(int);
		
	do{
	

		cout << "\nNama = ";
		getline(cin, nama);

			for (int i = 0 ; i <SIZE ; i++){
			cout << "Nilai "<< i+1 << "= ";
			cin >> nilai[i];
			}

		cout << endl;
		cout << "Nama = " << nama << endl;
		cout << "Nilai = ";
			for (int i = 0 ; i <SIZE ; i++){
		 	cout << nilai[i] << " ";
			}

		cout << endl;

		jumlah = 0;
			for (int j = 0 ; j < SIZE ; j++){
			jumlah = jumlah + nilai[j];
			}

		cout << "Jumlah Nilai = " << jumlah << endl;

		average = jumlah / SIZE;

		cout << "Nilai Rata-rata = " << average << endl;

		cout << "Apakah ingin mengulang program = ";
		cin >> ulang;
		cin.ignore(1, '\n');
	
	}while (ulang == 'Y' || ulang == 'y');
		cout << "Terima kasih";


	return 0;

}
