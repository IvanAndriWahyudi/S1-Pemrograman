#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

void pilihan1();
void pilihan2();
void pilihan2_1();
void pilihan2_2();
void pilihan3();
void pilihan3_1();

void pilihan3_2();
float angka, angka2, angka3, angka4;
float phi = 3.14;

int main(){
	system("cls");
	pilihan1();

return 0;

}
void pilihan1(){
	system("cls");
	int jawaban1;

	cout << "Ingin menghitung apa ? " << endl;
	cout << "Jika kubus ketik 1 " << endl;
	cout << "Jika Lingkaran ketik 2 " << endl;
	cout << "Jika ingin keluar ketik 3 " <<endl;
	cin >>  jawaban1;
	cout << endl;

		switch (jawaban1)
		{
		case 1:
		pilihan2();
		break;
		case 2:
		pilihan3();
		break;
		default:
		break;
		}
	}

void pilihan2(){
system("cls");
int jawaban2;

	cout <<"-----Kamu Memilih menghitung Kubus-----" << endl;
	cout << "-----------------MENU-----------------" << endl;
	cout << "Jika Volume ketik 1" << endl;
	cout << "Jika Luas ketik 2" << endl ;
	cout << "Jika ingin kembali ke menu sebelumnya ketik 3" << endl;
 	cout <<"Jika sudah memilih no 1, pilih no 2. sebaliknya jika sudah memilih no 2, pilih no1" << endl;
	cin >> jawaban2;
	cout << endl;

		switch (jawaban2)
		{
		case 1:
		pilihan2_1();
		break;
		case 2:
		pilihan2_2();
		break;
		case 3:
		pilihan1();
		break;
		default:
		cout << "syntax Error";
		pilihan2();
		break;
		}
	}

void pilihan3(){
	system("cls");
	int jawaban3;

		cout <<"-----Kamu Memilih menghitung Lingkaran---" << endl << endl;
		cout << "-----------------MENU-------------------"<< endl <<" 1. menghitung Keliling Lingkaran" << endl <<" 2. Menghitung Luas Lingkaran " << endl <<" 3. Kembali " << endl << endl <<"Jika Keliling ketik 1 , Jika Luas ketik 2, Jika ingin kembali ke menu sebelumnya ketik 3" << endl << "Jika sudah memilih no 1, pilih no 2. sebaliknya jika sudah memilih no 2, pilih no1 " << endl ;
		cin >> jawaban3;
		cout << endl;
		switch (jawaban3)
		{
		case 1:
		pilihan3_1();
		break;
		case 2:
		pilihan3_2();
		break;
		case 3:
		pilihan1();
		break;
		default:
		cout << "syntax Error";
		pilihan3();
		break;
		}
	}

void pilihan2_1(){
	system("cls");

	if (angka2 == 0 )
	{
		cout << "Masukkan banyak nilai sisi kubus(menghitung volume) = " << endl;
		cin >> angka;
		cout << endl;
		pilihan2();
	}
	else if (angka2 != 0 )
	{
	cout << "Masukkan banyak nilai sisi kubus(menghitung volume) = " << endl;
	cin >> angka;
	cout << endl;
	cout << "Jadi Volume Kubus dari "<< angka << " adalah = " << pow(angka, 3) << endl << "Luas Kubus dari " << angka2 << "adalah = " << pow(angka2, 2);
	}
	else
	{
	cout << "syntax error" << endl;
	pilihan2_2();
	}
}

void pilihan2_2(){
	system("cls");
		if (angka == 0 )
		{
		cout << "Masukkan nilai sisi kubus(menghitung luas) = " << endl;
		cin >> angka2;
		cout << endl;
		pilihan2();
		}
		else if (angka != 0 )
		{
		cout << "Masukkan nilai sisi kubus(menghitung luas) = " << endl;
		cin >> angka2;
		cout << endl;
		cout << "Jadi Volume Kubus dari "<< angka << " adalah = " << pow(angka, 3) << endl << "Luas Kubus dari " << angka2 << "adalah = " << pow(angka2, 2);
		}
		else
		{
		cout << "syntax error";
		pilihan2_2();
		}
		}

void pilihan3_1(){
	system("cls");

		if (angka4 == 0 )
		{
		cout << "Masukkan nilai jari-jari Lingkaran(menghitung keliling) = " << endl;
		cin >> angka3;
		cout << endl;
		pilihan3();
		}
		else if (angka4 != 0 )
		{
		cout << "Masukkan nilai jari-jari Lingkaran(menghitung keliling) = " << endl;
		cin >> angka3;
		cout << endl;
		cout << "Jadi Keliling Lingkaran dari jarijari " << angka3 << " adalah = " << 2 * phi * angka3 << endl << "Luas Lingkaran dari jari-jari " << angka4 << " adalah = " << phi * pow(angka4, 2);
		}
		else
		{
		cout << "syntax error";
		pilihan3_1();
		}
	}

void pilihan3_2(){
	system("cls");

		if (angka3 == 0 )
		{
		cout << "Masukkan nilai jari-jari Lingkaran(menghitung luas) = " << endl;
		cin >> angka4;
		cout << endl;
		pilihan3();
		}
		else if (angka3 != 0 )
		{
		cout << "Masukkan nilai jari-jari Lingkaran(menghitung luas) = " << endl;
		cin >> angka4;
		cout << endl;
		cout << "Jadi Keliling Lingkaran dari jarijari " << angka3 << " adalah = " << 2 * phi * angka3 << endl << "Luas Lingkaran dari jari-jari " << angka4 << " adalah = " << phi * pow(angka4, 2);
		}
		else
		{
		cout << "syntax error";
		pilihan3_2();
		}
	}




