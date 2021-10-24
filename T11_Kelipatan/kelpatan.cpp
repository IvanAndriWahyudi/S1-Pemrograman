#include <iostream>
using namespace std;

int main(){
  int myArray[10][10];  //mendeklarasikan array
  int i, j; //mendeklarasikan i, j

    for ( i = 0; i < 10; i++){  //pengulangan untuk baris
      for ( j = 0; j < 10; j++){ //pengulangan untuk kolom
        myArray[i][j]=(i+1)*(j+1);  //mengkalikan nilai baris dan kolom lalu menyimpannya diarray
      }
    }
    for ( i = 0; i < 10; i++){  //pengulangan untuk menampilkan kalimat
      cout << "kelipatan ke " << i+1 << " adalah "<< endl; //menampilkan kalimat kelipatan 
      for ( j = 0; j < 10; j++){ //pengulangan untuk menampilkan data diarray
        cout << myArray[i][j] << " " ;  //menampilkan data yang telah di simpan di array
      }
      cout << "\n" ; //untuk membuat baris baru
  }
  return 0;
}