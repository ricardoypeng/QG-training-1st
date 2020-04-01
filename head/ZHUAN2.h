#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
void ZHUAN_(struct kk **pp,struct kk *p)//head
{
	int num,z;
	struct kk *o,*a,*k,*j;//0,1,2,3 1<->2
	bool ss=0;
	int sb=0;
	system("cls");
	cout<<"开始执行"<<endl;
	a=p;//慢指针
	k=p;//快指针
	j=p;
	if(p==NULL||p->data==NULL)
	{
		cout<<"链表为空，请检查后重试"<<endl;
		system("pause");
		return; 
	}	
	while(1)
	{
//		cout<<"run2"<<endl;
		a=j;
		if(a->next!=NULL)//o (a k) j->o (k a) j
		{
//			cout<<"run3 "<<"a:"<<a->data<<" k:"<<k->data<<endl;
			k=a->next;
			j=k->next;
//			cout<<"run3.1 "<<"a:"<<a->data<<" k:"<<k->data<<endl;
			if(ss==0)
			{
				p=k;
				k->front=NULL; 
				ss=1;	
			}	
			else
			{
				o->next=k;
				k->front=o;
			}
//			cout<<"run3.2 "<<"a:"<<a->data<<" k:"<<k->data<<endl;
			k->next=a;
//			cout<<"run3.3 "<<"a:"<<a->data<<" k:"<<k->data<<endl;
			a->next=j;
//			cout<<"run4 "<<"a:"<<a->data<<" k:"<<k->data<<endl;
			a->front=k;
			if(j!=NULL)
			{
				o=a;
			}
			else
			{
				break;
			}
		}
		else
		{
			break;
		}
	}
	*pp=p;
	cout<<endl<<"执行完毕" <<endl;
	system("pause");
	return;
}

