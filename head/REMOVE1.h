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
		sb=0;//0���� 1���� 2Խ�� 
		k=p;//���Ƴ� 
		o=p;//��һ�� 
//		cout<<"head:"<<p->data<<endl;
//		cout<<"headnext:"<<p->next->data<<endl; 
		if(p==NULL||p->data==NULL)
		{
			cout<<"����Ϊ�գ����������"<<endl;
			system("pause");
			return; 
		}
		cout<<"����Ҫ�Ƴ��ڼ����ڵ㣬����0�������˵�"<<endl; 
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
					sb=2;//Խ�� 
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
	cout<<endl<<"ִ�����" <<endl;
	system("pause");
	return;
}


