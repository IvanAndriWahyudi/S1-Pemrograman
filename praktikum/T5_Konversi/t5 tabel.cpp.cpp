#include <iostream>
//#include <iomanip>

using namespace std;

int main(){
	int km = 1, m = 0, cm = 0;

    cout << "\n   Tabel Konversi bilangan dari KM->M->CM \n\n";
    cout << "   ===========================================\n";
    cout << "   | kilo Meter  |    meter    | Centi Meter |\n";
    cout << "   ===========================================\n";

	while (km <=10){
	    m = km * 1000;
	    cm = m * 100;
	    cout << "   |" << setw(7) << km << setw(7) << "|" << setw(8) <<  m << setw(6) << "|" << setw(9) << cm << setw(5) << "|"<<endl; 
	    cout << "   -------------------------------------------"<<endl;
	    km++;
	}

    return 0;
}