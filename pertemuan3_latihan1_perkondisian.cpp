#include<iostream>
using namespace std;

int main(){
    int nilai;
    cout<<"masukan nilai :";
    cin>>nilai;

    if (nilai >=90){
        cout<<"Selamat! anda mendapatkan nilai A ";
    } else if (nilai >= 80 ){
        cout<<"Anda mendapatkan nilai B";
    } else if (nilai >= 70 ) {
        cout<<"Anda mendapatkan nilai C";
    } else if (nilai >= 60 ){
        cout<<"Anda mendapatkan nilai D";
    } else {
        cout<<"Anda mendapatkan nilai E";
    }
	
	return 0;
}
