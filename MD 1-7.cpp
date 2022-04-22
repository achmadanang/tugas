#include <iostream>
using namespace std;

struct buku
{
	string judul_buku_07417[2][3]={{"jejak langkah","pramodya ananta toer","2015"},{"cantik itu luka","eka kurniawan","2002"}};
};

struct peminjam
{
	string nama_07417;
	string tanggal_07417;
	int pinjaman_07417;
};

struct data
{
	buku data_buku_07417;
	peminjam data_peminjam_07417;
};

int main()
{
	data semua;
	cout<<"nama peminjam :";
	cin>>semua.data_peminjam_07417.nama_07417;
	cout<<"tanggal peminjam :";
	cin>>semua.data_peminjam_07417.tanggal_07417;
	cout<<"jumlah buku yang di pinjam :";
	cin>>semua.data_peminjam_07417.pinjaman_07417;
	cout<<endl;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<1;j++)
		{
			cout<<"judul buku :"<<semua.data_buku_07417.judul_buku_07417[i][j]<<endl;
			cout<<"nama pengarang :"<<semua.data_buku_07417.judul_buku_07417[i][j+1]<<endl;
			cout<<"tahun terbit :"<<semua.data_buku_07417.judul_buku_07417[i][j+2]<<endl;
			cout<<endl;
		}
	}
	cout<<"nama peminjam :"<<semua.data_peminjam_07417.nama_07417<<endl;
	cout<<"tanggal peminjam :"<<semua.data_peminjam_07417.tanggal_07417<<endl;
	cout<<"jumlah buku yang dipinjam :"<<semua.data_peminjam_07417.pinjaman_07417<<endl;
	cout<<endl;
	
	for(int i=0;i<1;i++)
	{
		for(int j=0;j<1;j++)
		{
			cout<<"judul buku :"<<semua.data_buku_07417.judul_buku_07417[i+1][j]<<endl;
			cout<<"nama pengarang :"<<semua.data_buku_07417.judul_buku_07417[i+1][j+1]<<endl;
			cout<<"tahun terbit :"<<semua.data_buku_07417.judul_buku_07417[i+1][j+2]<<endl;
		}
	}
}
