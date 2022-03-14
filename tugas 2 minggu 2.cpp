#include <iostream>
#include <conio.h>
using namespace std;

struct data_tanggal
{
	int tgl,bln,thn;
};
struct
{
	data_tanggal tanggal_lahir;
	char npm[20];
	char nama[30];
	char alamat[30];
	char mk[20];
	int nilai;
} data_siswa[10];

int main()
{
	int n,i;
	cout<<"berapa siswa? :";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin.ignore();
		cout<<endl;
		cout<<"masukan tanggal lahir siswa ke "<<i<<": ";
		cin>>data_siswa[i].tanggal_lahir.tgl>>data_siswa[i].tanggal_lahir.bln>>data_siswa[i].tanggal_lahir.thn;
		cin.ignore();
		cout<<"masukan npm "<<i<<": ";
		cin.getline(data_siswa[i].npm,20); 
		cout<<"masukan nama "<<i<<": ";
		cin.getline(data_siswa[i].nama,30);
		cout<<"masukan alamat "<<i<<": ";
		cin.getline(data_siswa[i].alamat,30);
		cout<<"masukan mk "<<i<<": ";
		cin.getline(data_siswa[i].mk,20);
		cout<<"masukan nilai : ";
		cin>>data_siswa[i].nilai;
		
		cout<<endl;
		cout<<endl;
		
		cout<<"tanggal lahir siswa "<<i<<"="<<data_siswa[i].tanggal_lahir.tgl<<data_siswa[i].tanggal_lahir.bln<<data_siswa[i].tanggal_lahir.thn<<endl;
		cout<<"npm "<<i<<": "<<data_siswa[i].npm<<endl;
		cout<<"nama "<<i<<": "<<data_siswa[i].nama<<endl; 
		cout<<"alamat "<<i<<": "<<data_siswa[i].alamat<<endl;
		cout<<"mk "<<i<<": "<<data_siswa[i].mk<<endl;
		cout<<"nilai "<<i<<": "<<data_siswa[i].nilai<<endl;  
	}
}
