#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
struct kk{
    int data;
    struct kk *next;
}zz[1002],gg[1002];
void creatlist1(struct kk **head_,struct kk **tail_,struct kk *head,struct kk *tail)
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
	struct kk *p;
	char b;
	system("cls");
	cout<<"请输入你要创建的链表的长度（大于0小于1000）"<<endl;
	while(SHURU(&n)||n<0)
	{
		error_();
	}
	if(n==0)
	{
		cout<<"那就不创建咯~哼~"<<endl;
		system("PAUSE");
		return; 
	}
	cout<<endl<<"请分别输入每个元素的值(小于1e9)" <<endl;
	for(int i=1;i<=n;i++)
	{
		while(SHURU(&zz[i].data))
		{
			error_();
		}
		if(i==n)
		{
			zz[i].next=NULL;
		}
		else
		{
			zz[i].next=&zz[i+1];
		}
	} 
//	cout<<"head:"<<head->data<<endl;
//	cout<<"tail:"<<tail->data<<endl;
	cout<<endl<<"执行完毕" <<endl;
	system("pause");
	return;	
}
