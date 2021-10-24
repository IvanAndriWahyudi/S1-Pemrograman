#include <iostream>


using namespace std;


int bil_terbesar();
int bil1, bil2, bil3;

int main(){
	cout << "\tMenu Utama"<< endl;
	cout << "1.Bilangan terbesar" <<endl;
	cout << "2.Total bilangan" <<endl;
	cout << "3.Rata-rata" <<endl;
	cout << "4.Keluar" <<endl;

	return 0;
}

void jknj(){

		cout << "Masukan bilanga 1 = ";
	cin >> bil1;
	cout << "Masukan bilanga 2 = ";
	cin >> bil2;
	cout << "Masukan bilanga 3 = ";
	cin >> bil3;	
}

int bil_terbesar(){

	if ( bil1 > bil2 && bil1 > bil3 )
        cout << "nilai terbesar   : " << bil1 << endl;
    else if ( bil2 > bil1 && bil2 > bil3 )
        cout << "nilai terbesar   : " << bil2 << endl;
    else
        cout << "nilai terbesar   : " << bil3 << endl;

    return 0;

}

