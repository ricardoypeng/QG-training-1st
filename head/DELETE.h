#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
void DELETE_(struct kk **head_,struct kk **tail_,struct kk *head,struct kk *tail)
{
	memset(zz,0,sizeof(zz));
	memset(gg,0,sizeof(gg));
	head=&zz[1];
	tail=&gg[1]; 
	*head_=head;
	*tail_=tail;
	cout<<"链表已经被销毁啦！"<<endl;
	system("pause"); 
	return;
}

