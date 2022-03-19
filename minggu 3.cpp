#include <iostream>
using namespace std;

struct siswa
{
	char npm[20];
	char nama[30];
	char alamat[30];
	char mk[20];
	
};
struct nilai
{
	float nilai_uts;
	float nilai_uas;
	float nilai_tugas;
	float nilai_quis;
}

siswa data_siswa[10];
int main()
{
	int uts,uas,tugas,quis,n,a,i;
	
	
	cout<<"berapa siswa :";
	cin>>a;
	for (i=1;i<=a;i++)
	{
		cout<<endl;
		cout<<endl;
		cin.ignore();
		cout<<"masukan npm :";
		cin.getline(data_siswa[i].npm,20);
		cout<<"masukan nama :";
		cin.getline(data_siswa[i].nama,30);
		cout<<"masukan alamat :";
		cin.getline(data_siswa[i].alamat,30);
		cout<<"masukan mk :";
		cin.getline(data_siswa[i].mk,20);
		
		cout<<"masukan nilai uts :";
		cin>>uts;
		cout<<"masukan nilai uas :";
		cin>>uas;
		cout<<"masukan nilai tugas :";
		cin>>tugas;
		cout<<"masukan nilai quis :";
		cin>>quis;
		
		nilai_uts=0.2*uts;
		nilai_uas=0.25*uas;
		nilai_tugas=0.35*tugas;
		nilai_quis=0.2*quis;
		n=nilai_uts+nilai_uas+nilai_tugas+nilai_quis;
		cout<<endl;
		cout<<"total :"<<n;
		cout<<endl;
		cout<<endl;
		
		cout<<"npm :"<<data_siswa[i].npm<<endl;
		cout<<"nama :"<<data_siswa[i].nama<<endl;
		cout<<"alamat :"<<data_siswa[i].alamat<<endl;
		cout<<"mk :"<<data_siswa[i].mk<<endl;
		
		if((n>=80.56)&&(n<=100))
		cout<<"nilai :"<<"A";
		else if((n>=65.56)&&(n<=80.55))
		cout<<"nilai :"<<"B";
		else if((n>=55.56)&&(n<=65.55))
		cout<<"nilai :"<<"c";
		
		
		
	}
}
