#include <iostream>
using namespace std;

struct simpul{
	int data;
	simpul *next, *previous;
};

main (){
	simpul *awal = NULL, *akhir = NULL, *baru, *bantu, *bantu1;
	int data1, data_sisip, tekan, jawab;
	
	do{
		cout << "Masukkan data = "; cin >> data1;
		
		baru = new simpul;
		baru -> data = data1;
		baru -> next = NULL;
		
		if (akhir == NULL){
			awal = baru;
			akhir = baru;
		}
		else{
			akhir -> next = baru;
			akhir = baru;
		}
		cout << "Ingin tambah akhir (Tekan 1): "; cin >> tekan;
	}
	while (tekan == 1);
	bantu = awal;
	while (bantu != NULL){
		cout << bantu -> data << " ";
		bantu = bantu -> next;
	}
	cout << "Sisip Tengah (tekan 1): "; cin >> jawab;
	if (jawab == 1){
		baru = new simpul;
		cout << "Masukkan data sisip baru = "; cin >> data1;
		baru -> data = data1;
		cout << "Masukkan data sebelum apa = "; cin >> data_sisip;
		bantu = awal;
		while (bantu -> data == data_sisip)
		bantu = bantu -> previous;
		
		bantu1 = bantu -> previous;
		bantu -> previous = baru;
		baru -> previous = bantu1;
	}
	bantu = awal;
	while (bantu != NULL){
		cout << bantu -> data << " ";
		bantu = bantu -> next;
	}
	return 0;
}
