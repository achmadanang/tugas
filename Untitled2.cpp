#include <iostream>
using namespace std;

main()
{
	int uts,uas,tugas,absen,total;
	cout<<"nilai uts "; cin>>uts;
	cout<<"nilai uas "; cin>>uas;
	cout<<"nilai tugas "; cin>>tugas;
	cout<<"nilai absen "; cin>>absen;
	
	total=((uts*30/100)+(uas*40/100)+(tugas*20/100)+(absen*10/100));
	cout<<"total "<<total;
	
	if((total>=80.5)&&(total<=100))
	{
		cout<<" A";
	}
	else if((total>=65.56)&&(total<=80.56))
	{
		cout<<" B";
	}
	else if((total>=55.56)&&(total<=65.56))
	{
		cout<<" C";
	}
}
