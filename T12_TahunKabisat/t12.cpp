#include <iostream>

using namespace std;

int main(){
	int tahun;	//Mendeklarasikan tahun
	char ulang;	//Mendeklarasikan ulang


	cout << "Program tahun kabisat"<< endl;	// Menampilkan nama program
	cout << "by : Ivan Andri Wahyudi / 203510197 / 1B\n" << endl;	// Menampilkan pembuat program

	do{	// Perulangan do while
	cout << "masukan tahun yang ingin diketahui = ";	// Meminta user menginputkan tahun
	while(!(cin >> tahun)){	// Perulangan untuk menyimpan input
		cout << "Maaf input tidak sesuai, silahkan masukan tahun dalam bentuk angka =  ";	// Memberi tahu user inputnya tidak sesuai
		cin.clear();	//membersihkan inpuutan yang tidak sesuai
		cin.ignore(123, '\n');	//menyimpan inputan user yang sesuai
	}



		if (tahun % 400 == 0){	//jika tahun modulus 400 sisanya 0
			cout << tahun << " tahun kabisat" << endl;	//menampilkan tahun kabisat
		}else if(tahun % 100 == 0){	//jika tahun modulus 100 sisanya 0
			cout << tahun << " bukan tahun kabisat" << endl;	//menampilkan bukan tahun kabisat
		}else if(tahun % 4 == 0){	//jika tahun modulus 4 sisanya 0
			cout << tahun << " tahun kabisat" << endl;	//menampilkan tahun kabisat
		}else{	//default dari fungsi if
			cout << tahun << " bukan tahun kabisat" << endl;	//menampilkan tahun kabisat
		}


		cout << endl;	//memberikan baris baru
		cout << "ingin mengulang lagi ? tekan 'Y' jika ya dan tekan tombol lain jika tidak = ";	//Menanyakan user apakah ingin mengulag program
		cin >> ulang;	//menyimpan inputan user
		cout << endl;	//memberikan baris baru
		
	}while (ulang == 'Y' || ulang == 'y');	//Mengecek kondisi yang diinputkan user
		cout << "Terima kasih";	//Menampilkan Terima Kasih


	cin.get();	
	return 0;	//mengakhiri program dari int main
}
