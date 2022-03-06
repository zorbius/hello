#include <iostream>
using namespace std;

int main(){
	int nilai[] = {10,3,15,30,7,30,5,85,35,50};
	int length = sizeof(nilai)/sizeof(*nilai);
	int temp, cariData, hasilCari;
	
	// data sebelum disorting
	cout << "Hasil sebelum di Sorting: ";
	for(int i = 0; i < length; i++){
		cout << " " << nilai[i];
	}
	cout << endl;
	cout << endl;
	
	// data setelah disorting dari besar ke kecil
	for(int a = 1; a < length; a++){
		for(int b = 0; b < length-a; b++){
			if(nilai[b] < nilai[b+1]){
				temp = nilai[b];
				nilai[b] = nilai[b+1];
				nilai[b+1] = temp;
			}
		}
	}
	
	cout << "Hasil Sorting dari Besar ke Kecil : ";
	for(int c = 0; c < length; c++){
		cout << " " << nilai[c];
	}
	cout << endl;
	cout << endl;
	
	
	// data setelah disorting dari kecil ke besar
	for(int d = 1; d < length; d++){
		for(int e = 0; e < length-d; e++){
			if(nilai[e] > nilai[e+1]){
				temp = nilai[e];
				nilai[e] = nilai[e+1];
				nilai[e+1] = temp;
			}
		}
	}
	
	cout << "Hasil Sorting dari Kecil ke Besar : ";
	for(int f = 0; f < length; f++){
		cout << " " << nilai[f];
	}
	cout << endl;
	cout << endl;
	
	// pencarian data pada array
	cout << "Cari Data Array: ";
	cin >> cariData;
	for(int x = 0; x < length; x++){
		if(cariData == nilai[x]){
			hasilCari++;
		}
	}
	if(hasilCari == 0){
		cout << "Data tidak ditemukan!" << endl;
	} else {
		for(int y = 0; y < length; y++){
			if(cariData == nilai[y]){
				cout << "Data " << cariData << " ditemukan di Index ke-" << y << endl;
			}
		}
	}
}
