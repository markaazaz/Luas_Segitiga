#include <iostream>
using namespace std;

int main(){
	float luas,alas,tinggi; // deklarasi variabel
	
	cout<<"===================================\n";
	cout<<"		Hitung Luas Segitiga		  \n";
	cout<<"===================================\n";
	
	cout<<"Masukkan Nilai Alas :";//meminta user untuk memasukkan input data alas
	cin>>alas;
	cout<<"Masukkan Nilai Tinggi : ";//meminta user untuk memasukkan input data tinggi
	cin>>tinggi;
	
	luas = 0.5 * alas * tinggi; //perhitungan
	cout<<"Luas Segitiga adalah "<<luas; //output
}
