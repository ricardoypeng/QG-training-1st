#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
void SHUCHU(struct kk *p)
{
	if(p==NULL||p->data==NULL)
	{
		cout<<"����Ϊ�գ����������"<<endl;
		system("pause");
		return; 
	}
	cout<<"�����������"<<endl; 
	do
	{
		cout<<p->data<<" ";
		p=p->next;
	}while(p->next!=NULL);
	cout<<p->data;
	cout<<endl<<"ִ�����" <<endl;
	system("pause");
	return;
}

