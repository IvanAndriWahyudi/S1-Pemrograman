#include <iostream>

using namespace std;

float bil_terbesar();
float total_bil();
float rata_bil();

float bil1, bil2, bil3;


int main(){

	int pilih;
	char ulang;

	do{
	cout << "\tMenu Utama"<< endl;
	cout << "1.Bilangan terbesar" <<endl;
	cout << "2.Total bilangan" <<endl;
	cout << "3.Rata-rata" <<endl;
	cout << "4.Keluar" <<endl;
	cout << "Silahkan pilih nomor = ";
	cin >> pilih;

	switch (pilih) {
		case 1 : bil_terbesar(); 
		break;
		case 2 : total_bil();
		break;
		case 3 : rata_bil(); 
		break;
		default : cout << "\nAnda Telah Keluar Dari Program. \n";
	}
	cout <<"Apkah ingin menulang program ? tekan 'Y' jika ya tombol lain jika tidak = ";
	cin >> ulang;
	cout << "\n";

	}while (ulang == 'Y' || ulang == 'y');	//Mengecek kondisi yang diinputkan user
		cout << "Terima kasih\n";	
return 0;
}



float bil_terbesar(){

	for (int i = 0 ; i < 10 ; i++){
		cout << 1;
	}

	cout << "\nMasukan bilanga 1 = ";
	cin >> bil1;
	cout << "Masukan bilanga 2 = ";
	cin >> bil2;
	cout << "Masukan bilanga 3 = ";
	cin >> bil3;
	cout << endl;

	if ( bil1 > bil2 && bil1 > bil3 )
	 cout << "Nilai terbesar = " << bil1 << "\n"<< endl;
	 else if ( bil2 > bil1 && bil2 > bil3 )
	 cout << "Nilai terbesar = " << bil2 << "\n"<< endl;
	 else
	 cout << "Nilai terbesar = " << bil3 << "\n"<< endl;

 return 0;
}

float total_bil(){

	float hasil;

	cout << "\nMasukan bilanga 1 = ";
	cin >> bil1;
	cout << "Masukan bilanga 2 = ";
	cin >> bil2;
	cout << "Masukan bilanga 3 = ";
	cin >> bil3;
	cout << endl;

	hasil = bil1 + bil2 + bil3;
	cout << "Total bilangan = " << hasil << "\n"<< endl;

return hasil;

}
float rata_bil(){
	float avg;

	cout << "\nMasukan bilanga 1 = ";
	cin >> bil1;
	cout << "Masukan bilanga 2 = ";
	cin >> bil2;
	cout << "Masukan bilanga 3 = ";
	cin >> bil3;
	cout << endl;

	avg = (bil1 + bil2 + bil3) / 3;
	cout << "Rata-rata bilangan = " <<avg << "\n"<< endl;

	return avg;
}