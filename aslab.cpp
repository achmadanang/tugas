#include <iostream>
using namespace std;

// deklarasi double linked list
struct DataUser_07417{
  string nama, alamat, NPM, JURUSAN;
  DataUser_07417*prev;
  DataUser_07417*next;
};
DataUser_07417*head, *tail, *cur, *newNode, *del;
// count Double Linked List
int countDoubleLinkedList_07417()
{
        cur= head;
        int jumlah = 0;
        while( cur != NULL )
        {
            jumlah++;
            //step
            cur = cur->next;
        }
        return jumlah;

}
// Add First
void addFirst_07417( string data[5] )
{
        newNode = new DataUser_07417();
        newNode->nama= data[0];
        newNode->alamat= data[2];
        newNode->JURUSAN = data[3];
        newNode->NPM= data[4];
        newNode->prev= NULL;
        newNode->next= NULL;
        if(head==NULL)
        {
            tail=newNode;
        }
        else
        {
            newNode->next=head;
            head->prev=newNode;
        }
        head= newNode;

}
void removeFirst_07417()
{
    if( head== NULL )
    {
        cout << "buat data";
    }
    else
    {
        del= head;
        head= head->next;
        head->prev = NULL;
        delete del;
    }
}
// Print Double Linked List
void printDoubleLinkedList_07417()
{
    if( head== NULL )
    {
        cout << "buat data";
    }
    else
    {
        cout << "jumlah Data : " << countDoubleLinkedList_07417() << endl;
        cur= head;
        while( cur!= NULL )
        {
            // print
            cout << "nama: " << cur->nama << endl;
            cout << "alamat: " << cur->alamat << endl;
            cout << "jurusan: " << cur->JURUSAN<<endl;
            cout << "npm: " << cur->NPM<< endl;
            //step
            cur= cur->next;
        }
    }
}
void swapp(DataUser_07417*ubah1,DataUser_07417*ubah2)
{
                newNode=new DataUser_07417;

                newNode->nama=ubah1->nama;
                ubah1->nama=ubah2->nama;
                ubah2->nama=newNode->nama;

                newNode->JURUSAN=ubah1->JURUSAN;
                ubah1->JURUSAN=ubah2->JURUSAN;
                ubah2->JURUSAN=newNode->JURUSAN;

                newNode->NPM=ubah1->NPM;
                ubah1->NPM=ubah2->NPM;
                ubah2->NPM=newNode->NPM;

                newNode->alamat=ubah1->alamat;
                ubah1->alamat=ubah2->alamat;
                ubah2->alamat=newNode->alamat;
}
void  bublesort_07417()
{
    DataUser_07417*ptr1,*ptr2;
    ptr1=head;
    while (ptr1->next!=NULL)
    {
        ptr2=ptr1->next;
        while (ptr2!=NULL)
        {
            if (ptr1->nama  > ptr2->nama)
            {
                swapp(ptr2,ptr1);
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
}
void aftersort_07417()
{
    int num=1;
    cur=head;
    while(cur!=NULL)
    {
        cout<<num<<" nama: "<<cur->nama<<" alamat: "<<cur->alamat<<" jurusan: "<<cur->JURUSAN<<" npm: "<<cur->NPM<<endl;
        cur=cur->next;
        num++;
    }
}
void menu_07417()
{
  int nomor_07417;
  cout<<"data mahasiswa\n";
  cout<<"1.tambah data\n";
  cout<<"2.tampil\n";
  cout<<"3.hapus\n";
  cout<<"4.sorting\n";
  cout<<"INPUT  : ";
  cin >> nomor_07417;
  cout<<endl;

  if(nomor_07417==1)
  {
      string nama,alamat,NPM,JURUSAN;
      string newData[5];
      cin.ignore();
      cout << "nama: ";
      getline(cin,nama);
      cout << "alamat: ";
      getline(cin,alamat);
      cout << "jurusan: ";
      getline(cin,JURUSAN);
      cout << "npm: ";
      getline(cin,NPM);

    newData[0]=nama;
    newData[2]=alamat;
    newData[3]=JURUSAN;
    newData[4]=NPM;
    addFirst_07417(newData);
    system("PAUSE");
    system("CLS");
    menu_07417();
    cout <<endl;
  }

   if (nomor_07417==2)
  {
    printDoubleLinkedList_07417();
    system("PAUSE");
    system("CLS");
    menu_07417();
  }

 if (nomor_07417==3)
  {
       if (head==NULL)
      {
          cout <<" buat data\n";
          system("PAUSE");
          system("CLS");
          menu_07417();
      }

      else if (head->prev==NULL&&head->next==NULL)
      {
          head=NULL;
          cout <<" DATA TERHAPUS\n";
          system("PAUSE");
          system("CLS");
          menu_07417();
      }
      else{
      removeFirst_07417();
      cout << " berhasil menghapus data\n";
      system("PAUSE");
      system("CLS");
      menu_07417();
      }
  }
   if (nomor_07417==4)
  {
      bublesort_07417();
      aftersort_07417();
      system("PAUSE");
      system("CLS");
      menu_07417();
      menu_07417();
  }
  else
  {
      system("PAUSE");
      system("CLS");
      menu_07417();
  }
}
int main()
{
    menu_07417();
}
