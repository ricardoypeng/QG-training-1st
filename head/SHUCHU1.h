#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
void SHUCHU(struct kk *p)
{
	if(p==NULL||p->data==NULL)
	{
		cout<<"链表为空，请检查后重试"<<endl;
		system("pause");
		return; 
	}
	cout<<"现在输出链表"<<endl; 
	do
	{
		cout<<p->data<<" ";
		p=p->next;
	}while(p->next!=NULL);
	cout<<p->data;
	cout<<endl<<"执行完毕" <<endl;
	system("pause");
	return;
}

