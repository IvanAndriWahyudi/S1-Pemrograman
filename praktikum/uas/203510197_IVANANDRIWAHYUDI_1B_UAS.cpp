#include <iostream>
#include <string>

using namespace std;

int main() {
  int total, sks,ips ;
  string data[7][3] = {
    { "2 ", "Pendidikan Agama Islam ", "A" },
    { "4 ", "Pemrograman Komputer 1 ", "B" },
    { "2 ", "Bahasa Inggris 1 ", "C" },
    { "4 ", "Pengantar Teknologi Informasi ", "A-" },
    { "2 ", "Tata Tulis Karya Ilmiah ", "D" },
    { "3 ", "Logika Informatika ", "B+" },
    { "2 ", "Pendidikan Pancasila ", "B-" }
    };


    cout << ""
    string sks1=data[0][0];
    string sks2=data[1][0];
    string sks3=data[2][0];
    string sks4=data[3][0];
    string sks5=data[4][0];
    string sks6=data[5][0];
    string sks7=data[6][0];

    int num1=stoi(sks1);
    int num2=stoi(sks2);
    int num3=stoi(sks3);
    int num4=stoi(sks4);
    int num5=stoi(sks5);
    int num6=stoi(sks6);
    int num7=stoi(sks7);

    cout << "         NAMA : IVAN ANDRI WAHYUDI\n";
    cout << "         NPM  : 203510197\n";
    cout << "         KELAS: TTEKNIK INFORMSTIK 1B\n\n";


      for (int i = 0 ; i < 7 ; i++){
        for (int j = 0 ; j < 3 ; j++){
          cout << data[i][j];
        }
        cout << " " << endl;
      }

            total =(num1 * 4)+(num2 * 3)+(num3 * 2)+(num4 * 3.75)+(num5 * 1)+(num6 * 3.5)+(num7 * 2.75);
            sks = num1 + num2 + num3 + num4 + num5 + num6 + num7; 
            ips = total / sks;
            cout<<"\n\nTOTAL (SKS X GRADE ANGKA)     = " << total << endl;
            cout<<"TOTAL SKS                     = " << sks <<endl;
            cout<<"IP SEMESTER                   = " << ips <<endl<<endl;

  return 0;
}