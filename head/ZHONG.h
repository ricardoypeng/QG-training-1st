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
	a=p;//慢指针
	k=p->next;//快指针 
	if(p==NULL||p->data==NULL)
	{
		cout<<"链表为空，请检查后重试"<<endl;
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
	cout<<"链表中点是-> "<<a->data<<" <-哒"<<endl;
	cout<<endl<<"执行完毕" <<endl;
	system("pause");
	return;
}

