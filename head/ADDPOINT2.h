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
		sb=0;//0���� 1���� 2Խ�� 
		a=q;//����ֵ 
		k=p;//��ֵ����һ��
		o=k->next;//��ֵ����һ�� 
		if(p==NULL||p->data==NULL)
		{
			cout<<"����Ϊ�գ����������"<<endl;
			system("pause");
			return; 
		}
		cout<<"����Ҫ�ڵڼ����ڵ������½ڵ�"<<endl; 
		while(SHURU(&num)||num<0)
		{
			error_();
			continue;
		}				
		if(num==0)
		{
			cout<<"��������½ڵ����ֵ"<<endl;
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
					sb=2;//Խ��
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
					sb=1;//���� 
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
		cout<<"��������½ڵ����ֵ"<<endl;
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
	cout<<endl<<"ֵΪ"<<a->data<<endl; 
	cout<<endl<<"ִ�����" <<endl;
	system("pause");
	return;
}

