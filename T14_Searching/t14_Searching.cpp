#include <iostream>
using namespace std;

int main(){

  int counter, pilihan; 
  char ulang;
  string keyword_lowercase, keyword;
  string arr[] = {
    "BBCA",
    "ANTM",
    "PGAS",
    "TLKM",
    "BBRI",
    "UNVR",
    "ICBP",
    "ITMG",
    "PTBA",
    "KLBF",
    "ADHI",
    "BBNI",
    "WIKA",
    "GGRM",
    "MNCN" };

  int SIZE = sizeof(arr)/sizeof(string);

      do{
          cout << "\nDAFTAR KODE SAHAM PERUSAHAAN"<< endl;

          for(int i = 1 ; i < SIZE + 1 ; i++){
            cout << i << " " <<arr[i - 1]<<endl;
          }

          cout << "\n1. Mengurutkan Secara Ascending"<< endl;
          cout << "2. Mengurutkan Secara Descending" << endl;
          cout << "3. Mencari dengan Keywoard" << endl;
          cout << "9. Keluar" << endl;
          cout << "Pilih = ";
          cin >> pilihan;

          switch (pilihan) {
            case 1 : 
                  for (int i = 0 ; i < SIZE - 1 ; i++){
                    for (int j = 0 ; j < SIZE - 1 - i ; j++){
                      if (arr[j] > arr[j+1]){
                        string temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                      }
                    }
                  }

                  cout << endl;

                  cout << "Terurut Secara Ascending " << endl;
                  for (int i=0;i<SIZE;i++){
                    cout << arr[i] << endl;
                  }
            break;

            case 2 :   
                  for (int i = 0 ; i < SIZE - 1 ; i++){
                      for (int j = 0 ; j < SIZE - 1 - i ; j++){
                        if (arr[j] < arr[j+1]){
                          string temp = arr[j];
                          arr[j] = arr[j+1];
                          arr[j+1] = temp;
                        }
                      }
                    }

                  cout << endl;

                  cout << "Terurut Secara Descending " << endl;
                  for (int i=0;i<SIZE;i++){
                      cout << arr[i] << endl;
                  }
            break;

            case 3 :
                  cout << "Silahkan Masukan Keyword = ";
                  cin >> keyword; 

                  keyword_lowercase = keyword;
                      
                      for(int j = 0 ; j < keyword_lowercase.length(); j++){
                        keyword_lowercase[j] = tolower(keyword_lowercase[j]);
                      }

                      counter = 0;
                      for(int i = 0; i < SIZE; i++){
                        string temporary = arr[i];
                        for(int j = 0 ; j < temporary.length(); j++){
                          temporary[j] = tolower(temporary[j]);
                        }

                        if (temporary == keyword_lowercase){
                          cout << "index " << i << ": match" << endl;
                          counter++;
                        }else {
                          cout << "index " << i << ": not-match" << endl;
                        }
                      }

                       if(counter > 0){
                        cout << "Data ditemukan. Terdapat " << counter << " data yang match.\n" << endl;
                      } else {
                        cout << "Data tidak ditemukan\n" << endl;
                      }
            break;

            case 9 : 
                    cout << "Terima Kasih";

            break;
          }

        }while (pilihan != 9);           

  return 0;
 }
 

