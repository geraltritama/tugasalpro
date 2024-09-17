#include<iostream>
using namespace std;


int main ()
{
    int angka1;
    int angka2;
    int angka3;

    cout<<"masukan angka ke 1 :";
    cin>>angka1;
    cout<<"masukan angka ke 2 :";
    cin>>angka2;
    cout<<"masukan angka ke 3 :";
    cin>>angka3;

    if (angka1 > angka2 && angka1 > angka3){
        cout<<"Angka terbesar adalah:" << angka1 ;
    } else if (angka2 > angka1 && angka2 > angka3) {
        cout<<"Angka terbesar adalah:"<< angka2 ;
    } else if (angka3 > angka1 && angka3 > angka2){
        cout<<"Angka terbesar adalah: "<< angka3 ;
    } 
      else {
      	cout<<"Semua bilangan sama besar";
	}
    
    return 0;

}

