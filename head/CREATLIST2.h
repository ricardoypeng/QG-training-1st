#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
struct kk{
    int data;
    struct kk *front;
    struct kk *next;
}zz[1002],gg[1002];
void creatlist2(struct kk **head_,struct kk **tail_,struct kk *head,struct kk *tail)
{
	memset(zz,0,sizeof(zz));
	memset(gg,0,sizeof(gg));
	head=&zz[1];
	tail=&gg[1]; 
	*head_=head;
	*tail_=tail;
	for(int i=0;i<1000;i++)
	{
		gg[i].next=&gg[i+1];
	}
	int n;
	struct kk *p,*q;
	char b;
	system("cls");
	cout<<"��������Ҫ����������ĳ��ȣ�����0С��1000��"<<endl;
	while(SHURU(&n)||n<0)
	{
		error_();
	}
	if(n==0)
	{
		cout<<"�ǾͲ�������~��~"<<endl;
		system("PAUSE");
		return; 
	}
	cout<<endl<<"��ֱ�����ÿ��Ԫ�ص�ֵ(С��1e9)" <<endl;
	for(int i=1;i<=n;i++)
	{
		while(SHURU(&zz[i].data))
		{
			error_();
		}
		if(i==n&&i==1)
		{
			zz[i].front=NULL;
			zz[i].next=NULL;
		}
		if(i==1&&n!=1)
		{
			zz[i].front=NULL;
			zz[i].next=&zz[i+1];
		}
		if(i==n&&n!=1)
		{
			zz[i].front=&zz[i-1];
			zz[i].next=NULL;
		}
		else
		{
			zz[i].front=&zz[i-1];
			zz[i].next=&zz[i+1];
		}
	} 
//	cout<<"head:"<<head->data<<endl;
//	cout<<"tail:"<<tail->data<<endl;
	cout<<endl<<"ִ�����" <<endl;
	system("pause");
	return;	
}
