#include <iostream>
using namespace std;

int main(){
	float nilaiTugas, nilaiUTS, nilaiUAS;
	string nama, predikat;
	
	cout << "=== Program Untuk Menghitung Nilai Akhir ===" << endl << endl;
	cout << "Silahkan masukkan nama siswa : ";
	getline(cin, nama);
	cout << endl;
	
	cout << "Silahkan masukkan nilai tugas : ";
	cin >> nilaiTugas;
	cout << "Silahkan masukkan nilai UTS : ";
	cin >> nilaiUTS;
	cout << "Silahkan masukkan nilai UAS : ";
	cin >> nilaiUAS;
	cout << endl;
	
	float nilaiAkhir = ((float)30/100*nilaiTugas) + ((float)35/100*nilaiUTS) + ((float)35/100*nilaiUAS);
	
	if((nilaiAkhir>=93) && (nilaiAkhir<=100)){
		predikat = "A (Sangat Baik)";
	} else if((nilaiAkhir>=84) && (nilaiAkhir<=92)){
		predikat = "B (Baik)";
	} else if((nilaiAkhir>=75) && (nilaiAkhir<=83)){
		predikat = "C (Cukup)";
	} else if(nilaiAkhir < 75){
		predikat = "D (Kurang)";
	} else {
		predikat = "Tidak ada";
	}
	
	cout << endl;
	cout << "Halo, " << nama << endl;
	cout << "Nilai Akhir Anda adalah " << nilaiAkhir << " dengan Predikat : " << predikat;
	
	return 0;
}
