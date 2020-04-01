#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
void REMOVE_(struct kk **pp,struct kk *p)//head tail
{
	int num,z;
	struct kk *k,*o;
	int sb=0;
	while(1)
	{
		system("cls");
		sb=0;//0正常 1到底 2越界 
		k=p;//被移除 
		o=p;//上一个 
//		cout<<"head:"<<p->data<<endl;
//		cout<<"headnext:"<<p->next->data<<endl; 
		if(p==NULL||p->data==NULL)
		{
			cout<<"链表为空，请检查后重试"<<endl;
			system("pause");
			return; 
		}
		cout<<"输入要移除第几个节点，输入0返回主菜单"<<endl; 
		while(SHURU(&num))
		{			
			error_();
			continue;
		}			
		if(num==0)
		{
			return; 
		}	
		if(num<=0)
		{
			error_();
			continue;
		}
		if(num==1)
		{
			p=p->next;
			k->data=NULL;
			k->next=NULL;		
			*pp=p;
			break;
		}
		for(int i=2;i<=num;i++)
		{ 
			if(k->next==NULL)
			{
				if(i!=num)
				{
					sb=2;//越界 
					break; 
				} 
			}
			if(i!=2)
			{
				o=o->next;
			} 
			k=k->next;
		}
		if(sb==2)
		{
			error_();
			continue;
		}
		else
		{
			o->next=k->next;
			k->data=NULL;
			k->next=NULL;
			break;
		}
	}
//	cout<<"head:"<<p->data<<endl;
//	cout<<"headnext:"<<p->next->data<<endl; 
	cout<<endl<<"执行完毕" <<endl;
	system("pause");
	return;
}


