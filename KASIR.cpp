#include <iostream>
#include <string>
using namespace std;

int main() {

	//deklarasi diskon
	const double DISKON_USIA_DI_BAWAH_18 = 0.10; // diskon >18
	const double DISKON_USIA_18_65 = 0.05; //diskon 18-65
	const double DISKON_USIA_DI_ATAS_65 = 0.15; // diskon 65>
	
	//deklarasi data
	string NamaBarang;
	double HargaBarang, TotalHarga;
	int JumlahBarang, UsiaPengguna;
	
	//pemasukan data pembeli
	cout << "Masukkan nama barang : ";
	cin >> NamaBarang;
	cout << "Masukkan harga per barang : Rp. ";
	cin >> HargaBarang;
	cout << "Masukkan jumlah barang yang dibeli : ";
	cin >> JumlahBarang;
	cout << "Masukkan usia pengguna : ";
	cin >> UsiaPengguna;

	//metode hitung harga
	TotalHarga = HargaBarang * JumlahBarang;
	
	//kondisi diskon sesuai usia
	if (UsiaPengguna < 18) {
		TotalHarga -= TotalHarga * DISKON_USIA_DI_BAWAH_18;
	} else if (UsiaPengguna >= 18 && UsiaPengguna <= 65) {
		TotalHarga -= TotalHarga * DISKON_USIA_18_65;
	} else {
		TotalHarga -= TotalHarga * DISKON_USIA_DI_ATAS_65;
	}
	
	//output informasi pembelian 
	cout << "\nInformasi Pembelian\n";
	cout << "Nama Barang : " << NamaBarang << endl;
	cout << "Harga per Barang : Rp. " << HargaBarang << endl;
	cout << "Jumlah Barang : " << JumlahBarang << endl;
	cout << "Usia Pengguna : " << UsiaPengguna << " tahun" << endl;
	if (UsiaPengguna < 18) {
		cout << "Diskon : 10%" << endl;
	} else if (UsiaPengguna >= 18 && UsiaPengguna <= 65) {
		cout << "Diskon : 5%" << endl;
	} else {
		cout << "Diskon : 15%" << endl;
	}
	cout << "Total Harga Setelah Diskon : Rp. " << TotalHarga << endl;
	
    return 0;
}
