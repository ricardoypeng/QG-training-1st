#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
void ZHONG_(struct kk *p)//head
{
	int num,z;
	struct kk *a,*k,*o;
	int sb=0;
	system("cls");
	a=p;//��ָ��
	k=p->next;//��ָ�� 
	if(p==NULL||p->data==NULL)
	{
		cout<<"����Ϊ�գ����������"<<endl;
		system("pause");
		return; 
	}	
	while(1)
	{
		if(k==NULL)
		{
			break;
		}
		if(a->next!=NULL)
		{
			a=a->next;
		}
		else
		{
			break;
		}
		if(k->next!=NULL) 
		{
			k=k->next;
		}
		else
		{
			break;
		}
		if(k->next!=NULL) 
		{
			k=k->next;
		}
		else
		{
			break;
		}
	}
	cout<<"�����е���-> "<<a->data<<" <-��"<<endl;
	cout<<endl<<"ִ�����" <<endl;
	system("pause");
	return;
}

