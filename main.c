#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

typedef char string [50];

int main(int argc, char *argv[]) {
	string nama, tanggalPembelian, nama_barang_1, nama_barang_2;
	int jumlah_barang_1, jumlah_barang_2, jumlah_barang, bilangan_terdekat, n;
	float harga_barang_1, harga_barang_2, total_barang_1, total_barang_2, sebelum_pajak,sesudah_pajak, total_pajak;
	float sn, hemat, diskon, potongan_diskon;
	bool boolean;
	
	printf("\t=== [ Torserba Atma ] ===");
	printf("\nSelamat datang, tolong masukan Identitas Anda!\n");
	printf("\nMasukan nama anda		: "); fflush(stdin); gets(nama);
	printf("Masukan tanggal pembelian	: "); fflush(stdin); gets(tanggalPembelian);
	
	printf("\n\t=== [ Input Barang Cabang E ] ===");
	printf("\nMasukan nama barang pertama 	: "); fflush(stdin); gets(nama_barang_1);
	printf("Masukan harga barang pertama	: "); scanf("%f", &harga_barang_1);
	printf("Masukan jumlah barang pertama	: "); scanf("%d", &jumlah_barang_1);
	
	total_barang_1 = harga_barang_1 * jumlah_barang_1;
		
	printf("\n\t=== [Input Barang Cabang F]");
	printf("\nMasukan nama barang kedua	: "); fflush(stdin); gets(nama_barang_2);
	printf("Masukan harga barang kedua	: "); scanf("%f", &harga_barang_2);
	printf("Masukan jumlah barang kedua	: "); scanf("%d", &jumlah_barang_2);
	
	total_barang_2 = harga_barang_2 * jumlah_barang_2;
	
	jumlah_barang = jumlah_barang_1 + jumlah_barang_2;
	printf("\n\n\t === [Tampil Detail ] ===\n");
	printf("ID Pelanggan 	: 2000000000%d", jumlah_barang);
	printf("\nTanggal Pesanan	: %s", tanggalPembelian);
	
	printf("\n\nData Barang Cabang E	:");
	printf("\n Nama Barang	: %s", nama_barang_1);
	printf("\nHarga Barang	: Rp %.2f", harga_barang_1);
	printf("\nJumlah Barang	: %d", jumlah_barang_1) ;
	
		
	printf("\n\nData Barang Cabang F	:");
	printf("\nNama Barang	: %s", nama_barang_2);
	printf("\nHarga Barang	: Rp %.2f", harga_barang_2);
	printf("\nJumlah Barang	: %d", jumlah_barang_2);
	
	boolean = total_barang_1 == total_barang_2;
	printf("\n\nApakah total harga barang sama ? %d", boolean);
	
	boolean = total_barang_1 < total_barang_2;
	printf("\nApakah harga barang pertama kurang dari kedua ? %d", boolean);
	
	sebelum_pajak = total_barang_1 + total_barang_2;
	printf("\n\nTotal Harga sebelum Pajak	: Rp %.2f", sebelum_pajak);
	
	total_pajak = sebelum_pajak * 0.11;
	sesudah_pajak = total_pajak + sebelum_pajak;
	printf("\nTotal Harga sesudah Pajak 	: Rp %.2f", sesudah_pajak);
	
	//Tugas//
	printf("\n\n\t=== [ Diskon ] === ");
	
	bilangan_terdekat = (jumlah_barang / 5) * 5;
	n = bilangan_terdekat / 5;
	sn = (5 * n * (n + 1)) / 2;
	sn = sn / 10;
	
	diskon = sesudah_pajak * (sn / 100);
	
	potongan_diskon = sesudah_pajak - diskon;
	
	printf("\nPersen Diskon			: %.1f0%%", sn);
	printf("\nTotal Harga setelah diskon	: Rp %.2f", potongan_diskon);
	printf("\nAnda Hemat			: Rp %.2f", diskon);
	
	return 0;
}
