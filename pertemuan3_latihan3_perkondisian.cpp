#include<iostream>
using namespace std;

int main (){
	int pilihan;
	float luas;
	float sisi;
	float panjang, lebar;
	float alas, tinggi;
	
	while (true) { //perulangan 
	
	cout << "\nPilih bentuk bangun datar yang ingin dihitung:\n";
	cout << "1. Persegi " <<endl;
	cout << "2. Persegi Panjang" <<endl;
	cout << "3. Segitiga" <<endl;
	cout << "4. Keluar program" <<endl;
	cout << endl;
	cout << "masukan pilihan (1-3): ";
	cin >> pilihan;
	
	switch (pilihan) {
		case 1:
			cout <<"\nMenghitung Luas Persegi"<<endl;
			cout <<"Masukan sisi:";
			cin >> sisi;
			luas = sisi*sisi;
			cout << "Luas Persegi: "<< luas <<endl;
			break;
			
		case 2:
			cout <<"\nMenghitung Luas Persegi Panjang"<<endl;
			cout <<"Masukan panjang: ";
			cin >> panjang;
			cout << "Masukan lebar: ";
			cin >>lebar;
			luas = panjang * lebar;
			cout << "Luas Persegi Panjang: " << luas << endl;
			break;
			
		case 3:
			cout <<"\nMenghitung Luas Segitiga"<<endl;
			cout <<"Masukan alas: ";
			cin >> alas;
			cout << "Masukan tinggi: ";
			cin >> tinggi;
			luas = 0.5 * alas * tinggi;
			cout << "Luas Segitiga: " << luas << endl;
			break;
			
		case 4:
			cout <<"Keluar dari program"<<endl;
			return 0;
			break;
			
		default:
			cout << "Pilihan tidak tersedia"<< endl;
			break;
			
		}
	
	}
	
}
