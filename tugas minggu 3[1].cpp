#include <iostream>
using namespace std;

struct data_mhs
{
	char npm[20];
	char nama[40];
	char alamat[30];
	char matkul[30];
};
struct smtr_smt
{
	struct data_mhs mhs;
	char semester;
	
}nilai;
struct nilai_siswa
{
	float nuts;
	float nuas;
	float ntugas;
	float nquis;
}data;


int main()
{
    int n,i,uts,uas,tugas,quis;
	
	cout<<"berapa siswa :";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<endl;
		cout<<endl;
		cin.ignore();
		cout<<"masukan npm :";
		cin>>nilai.mhs.npm;
		cout<<"semester :";
		cin>>nilai.semester;
		cout<<"masukan nama :";
		cin>>nilai.mhs.nama;
		cin.ignore();
		cout<<"masukan alamat :";
		cin>>nilai.mhs.alamat;
		cout<<"masukan matkul :";
		cin>>nilai.mhs.matkul;
	    cout<<endl;
	    
	    cout<<"masukan nilai uts :";
	    cin>>uts;
	    cout<<"masukan nilai uas :";
	    cin>>uas;
	    cout<<"masukan nilai tugas :";
	    cin>>tugas;
	    cout<<"masukan nilai quis :";
	    cin>>quis;
	    
	    
	    data.nuts=0.20*uts;
	    data.nuas=0.25*uas;
	    data.ntugas=0.35*tugas;
	    data.nquis=0.20*quis;
	    n=data.nuts+data.nuas+data.ntugas+data.nquis;
	    cout<<"total nilai :"<<n;
	    cout<<endl;
	    cout<<endl;
	    
		cout<<"npm :"<<nilai.mhs.npm<<endl;
		cout<<"semester :"<<nilai.semester<<endl;
		cout<<"nama :"<<nilai.mhs.nama<<endl;
		cout<<"alamat :"<<nilai.mhs.alamat<<endl;
		cout<<"matkul :"<<nilai.mhs.matkul<<endl;
		
		if((n>=80.56)&&(n<=100))
		cout<<"nilai :"<<"A";
		else if((n>=65.56)&&(n<=80.55))
		cout<<"nilai :"<<"B";
		else if((n>=55.56)&&(n<=65.55))
		cout<<"nilai :"<<"c";
	}
}

