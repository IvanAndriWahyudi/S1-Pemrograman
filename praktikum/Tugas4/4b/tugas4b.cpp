#include <iostream>
#include <string>
using namespace std;

int main(){
	string jurusan;

	cout << "Masukan kode jurusan kamu ? Pilih salah satu 'TI', 'SI', 'SK', 'AK' = ";
	cin >> jurusan;

	if (jurusan == "TI"){
		cout << "Jurusan kamu adalah Teknik Informatika"<< endl;
	}else if (jurusan == "SI"){
		cout << "Jurusan kamu adalah Sistem Informasi"<< endl;
	}else if (jurusan == "SK"){
		cout << "Jurusan kamu adalah Sistem Komputer"<< endl;
	}else if (jurusan == "AK"){
		cout << "Jurusan kamu adalah Akutansi"<< endl;
	}else{
		cout << "Kode jurusan tidak ada"<< endl;
	}


	return 0;
}