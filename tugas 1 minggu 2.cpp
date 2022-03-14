#include <iostream>
using namespace std;

struct siswa
{
	char npm [20];
	char nama [30];
	char alamat [30];
	char mk [20];
	float nilai;
};

int main()
{
	siswa data_siswa;
	float nilai;
	
	cout<<"masukan npm ";
	cin.getline(data_siswa.npm,20);
	cout<<"masukan nama ";
	cin.getline(data_siswa.nama,30);
	cout<<"masukan alamat ";
	cin.getline(data_siswa.alamat,30);
	cout<<"masukan mk ";
	cin.getline(data_siswa.mk,20);
	cout<<"masukan nilai ";
	cin>> nilai;   
	
	cout<<endl;
	cout<<endl;
	
	cout<<"npm :"<<data_siswa.npm<<endl;
	cout<<"nama :"<<data_siswa.nama<<endl;
	cout<<"alamat :"<<data_siswa.alamat<<endl;
	cout<<"mk :"<<data_siswa.mk<<endl;
	cout<<"nilai :"<<nilai<<endl;
}
