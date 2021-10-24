#include <iostream>
using namespace std;


int process();

int main(){

	float FirstNumber, SecondNumber;
	char operation;
	float result ;

    cout<<"====================================================================================="<<endl;
	cout<<"==========================PROGRAM : KALKULATOR======================================="<<endl;
    cout<<"===============================BY : RIKO SAPARDI====================================="<<endl;
    cout<<"==============================NPM : 203510214========================================"<<endl;
    cout<<"====================================================================================="<<endl;


	cout << "Silahkan masukan angka pertama	= ";
	cin >> FirstNumber;

	cout << "Silahkan pilih operasi berikut ? (*), (/), (+), (-), (%) =  ";
	cin >> operation;

	cout << "Silahkan masukan angka kedua	= ";
	cin >> SecondNumber;

	//result = process( FirstNumber,  SecondNumber,  operation);

	cout << "Hasil dari " <<FirstNumber <<" " << operation << " " << SecondNumber << " = " << process( FirstNumber,  SecondNumber,  operation) << endl;
	cout<<"=====================================================================================" <<endl;

	return 0;
}

int process(float FirstNumber, float SecondNumber, char operation){

	if (operation == '*'){
		return FirstNumber * SecondNumber;
	}else if (operation == '/'){
		return  FirstNumber / SecondNumber;
	}else if (operation == '+'){
		return  FirstNumber + SecondNumber;
	}else if (operation == '-'){
		return  FirstNumber - SecondNumber;
	}else {
		cout << "Anda Salah Memasukan perintah" << endl;
		return 0;
	}
}

