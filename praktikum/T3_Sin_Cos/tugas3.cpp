#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h> 
     
using namespace std;

int main()
{ 

    cout<<"===============================================================\n";
    cout<<"==========PROGRAM MENGHITUNG NILAI SIN,COS,TAN=================\n";
    cout<<"=============================================================\n\n";

    double x,sin_,cos_,tan_;
    float pi=3.14;
    char i;
   
    do{
    cout<<"masukkan nilai x = ";
    cin>> x;
   
    sin_ = sin (x*pi/180);
    cos_ = cos(x*pi/180);
    tan_ = tan(x*pi/180);

    cout << "maka"<< endl;
    cout<<"sin "<< x << " = " <<sin_<<endl;
    cout<<"cos "<< x << " = " <<cos_<<endl;
    cout<<"tan "<< x << " = " <<tan_<<endl;
    cout << "\n";

    i='y';
    cout<<"Apakah anda ingin melakukannya lagi ? (ketik (y) jika iya, ketik (n) jika tidak "<<endl;
    cout<<"jawab:";
    cin>>i;
    if(i=='y'||i=='y'){
        cout<<endl;
        cout<<"=========================================================\n\n";
    }else{
        cout<<"\n\n";
        cout<<"============================================================="<<endl;
        cout<<"-------------------- T E R I M A  K A S I H -----------------"<<endl;
        cout<<"============================================================="<<endl;
    }
        }while (i=='y'||i=='y');

    return 0;
}