#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
void ADD_(struct kk **pp,struct kk **qq,struct kk *p,struct kk *q)//head tail
{
	int num,z;
	struct kk *a,*k,*o;
	int sb=0;
	while(1)
	{
		system("cls");
		sb=0;//0正常 1到底 2越界 
		a=q;//被赋值 
		k=p;//赋值的上一个
		o=k->next;//赋值的下一个 
		if(p==NULL||p->data==NULL)
		{
			cout<<"链表为空，请检查后重试"<<endl;
			system("pause");
			return; 
		}
		cout<<"输入要在第几个节点后插入新节点"<<endl; 
		while(SHURU(&num)||num<0)
		{
			error_();
			continue;
		}				
		if(num==0)
		{
			cout<<"输入插入新节点的数值"<<endl;
			while(SHURU(&a->data))
			{
				error_();
			}
			q=q->next; 
			a->front=NULL;
			a->next=p;
			p=a;
			*qq=q;
			*pp=p;
			break;
		}
		for(int i=1;i<=num;i++)
		{ 
			if(i!=num)
			{
				if(k->next==NULL)
				{
					sb=2;//越界
					break; 
				}
				else
				{
					k=k->next;
				}			
			}
			else
			{
				if(k->next==NULL)
				{
					sb=1;//到底 
				}				
			}
		}
		if(sb!=0)
		{
			if(sb==2)
			{
				error_();
				continue;
			}
			else
			{
				a->next=NULL;
				a->front=k;
				k->next->front=a;
				k->next=a;	
			}
		}
		else
		{
			o=k->next;
		}
		cout<<"输入插入新节点的数值"<<endl;
		while(SHURU(&a->data))
		{
			error_();
		}
		q=q->next;
		k->next->front=a;
		k->next=a;
		if(sb==0)
		{
			a->next=o;
		}
		*qq=q;
		break;
	}
//	cout<<"head:"<<p->data<<endl;
//	cout<<"headnext:"<<p->next->data<<endl; 
//	cout<<"tail:"<<q->data<<endl;
	cout<<endl<<"值为"<<a->data<<endl; 
	cout<<endl<<"执行完毕" <<endl;
	system("pause");
	return;
}

