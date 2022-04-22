#include <iostream>
using namespace std;

struct node
{
	int data;
	node*next,*prev;
};
node*head,*tail,*newnode,*cur;
void newsimpul(int databaru)
{
	newnode=new node;
	newnode->data=databaru;
	newnode->next=NULL;
	newnode->prev=NULL;
}
void tambahdepan()
{
	if(head==NULL)
	{
		tail=newnode;
	}
	else
	{
		newnode->next=head;
		head->prev=newnode;
	}
	head=newnode;
}
void tambahbelakang()
{
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
	}
	tail=newnode;
}
int main()
{
	int databaru;
	char ulang;
	do
	{
		cout<<"masukan angka :";
		cin>>databaru;
		cout<<"tambah angka lagi(y/t) :";
		cin>>ulang;
		newsimpul(databaru);
		tambahdepan();
		newsimpul(databaru);
		tambahbelakang();
	}
	while(ulang=='y'||ulang=='Y');
	if(ulang=='t'||ulang=='T');
	{
		cur=head;
		while(cur!=NULL)
		{
			cout<<cur->data;
			cur=cur->next;
		}
	}
}
