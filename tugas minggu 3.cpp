#include <iostream>
using namespace std;

struct data_mhs
{
	char npm[20];
	char nama[40];
	char alamat[30];
	char matkul[30];
};
struct nilai_siswa
{
	float nuts;
	float nuas;
	float ntugas;
	float nquis;
};
struct 
{
	struct data_mhs mhs;
	struct nilai_siswa siswa;
}nilai;


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
	    
	    
	    nilai.siswa.nuts=0.20*uts;
	    nilai.siswa.nuas=0.25*uas;
	    nilai.siswa.ntugas=0.35*tugas;
	    nilai.siswa.nquis=0.20*quis;
	    n=nilai.siswa.nuts+nilai.siswa.nuas+nilai.siswa.ntugas+nilai.siswa.nquis;
	    cout<<"total nilai :"<<n<<endl;
	    
		cout<<"npm :"<<nilai.mhs.npm<<endl;
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

