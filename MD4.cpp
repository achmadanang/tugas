#include <iostream>
using namespace std;

struct node
{
    string nama_07417,jurusan_07417,npm_07417;
    node *next;
}nodee;
node *head,*tail,*new_node,*cur,*sorted;

    void insertbehindlist_07417(string nama_07417,string npm_07417, string jurusan_07417){
        new_node= new node;
        new_node->nama_07417 = nama_07417;
        new_node->npm_07417=npm_07417;
        new_node->jurusan_07417=jurusan_07417;
        new_node->next = NULL;
        if (head==NULL)
        {
            head=new_node;
        }
        else
        {
            tail->next=new_node;
        }
        tail=new_node;
    }
void printlist_07417()
    {
        cur=head;
        while (cur != NULL){
            cout<<endl;
            cout<<"Nama  : "<<cur->nama_07417<<endl;
            cout<<"npm  : "<<cur->npm_07417<<endl;
            cout<<"jurusan : "<<cur->jurusan_07417<<endl;
            cur=cur->next;
        }
    }
void sortedInsert_07417(node* new_node)
    {
        if (sorted == NULL ||
            sorted->npm_07417 >= new_node->npm_07417)
        {
            new_node->next = sorted;
            sorted = new_node;
        }
        else
        {
            node* cur = sorted;
            while (cur->next != NULL &&
                   cur->next->npm_07417< new_node->npm_07417)
            {
                cur = cur->next;
            }
            new_node->next = cur->next;
            cur->next = new_node;
        }
    }
void insertionSort_07417(node* head)
    {
        sorted = NULL;
        cur = head;
        while (cur != NULL)
        {
            node* next = cur->next;
            sortedInsert_07417(cur);
            cur = next;
        }
        head = sorted;
    }
void inputdata_07417()
{
    cin.ignore();
    cout<<"nama: ";
    getline(cin,nodee.nama_07417);
    cout<<"npm: ";
    getline(cin,nodee.npm_07417);
    cout<<"jurusan: ";
    getline(cin,nodee.jurusan_07417);
}
void searchlinear_07417()
{
    node *temp;
    string pos;
    int front1=1,in;
    cin.ignore();
    cout<<"npm yang di cari : ";
    getline(cin,pos);
    temp=head;
    while(temp!=NULL)
    {if(temp->npm_07417!=pos)
	    {
        temp=temp->next;
        }
        else
        {
        in=true;
        break;
        }
    }
    if(in==1)
    {
        cout<<"Nama  : "<<temp->nama_07417<<endl;
        cout<<"npm  : "<<temp->npm_07417<<endl;
        cout<<"jurusan  : "<<temp->jurusan_07417<<endl;
    }
    else
    {
        cout<<"data tidak ada"<<endl;
    }
}
int main(){
  int in,rep;
  do
  {
      system("cls");
      cout<<"1.input "<<endl;
      cout<<"2.sort  "<<endl;
      cout<<"3.search"<<endl;
      cout<<"4.tampil"<<endl;
      cout<<"input : ";
      cin>>in;
      if (in==1)
      {
          inputdata_07417();
          insertbehindlist_07417(nodee.nama_07417,nodee.npm_07417,nodee.jurusan_07417);
      }
      if (in==2)
      {
            insertionSort_07417(head);
            printlist_07417();
      }
      if (in==3)
      {
        searchlinear_07417();
      }
      if (in==4)
      {
          printlist_07417();
      }
      cout<<endl;
      cout<<"ulang ketik 1 : ";
      cin>>rep;
  }
  while(rep==1);
}
