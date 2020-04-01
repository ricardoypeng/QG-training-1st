#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "../head/SHURU1.h"
#include "../head/ERROR.h"
#include "../head/CREATLIST2.h"//1
#include "../head/ADDPOINT2.h"//2
#include "../head/REMOVE1.h"//3
#include "../head/SHUCHU1.h"//4
#include "../head/ZHONG.h"//5
#include "../head/ZHUAN2.h"//6
#include "../head/DELETE.h"//7
using namespace std;
struct kk *head=&zz[1],*tail=&gg[1];
void ui2_()
{
	int d;
	bool dd=0;
	do
	{
		dd=0;
		system("cls");
		cout<<"┌────────────────────────────────────┐"<<endl; 
		cout<<"│            双向链表练习            │"<<endl;
		cout<<"│────────────────────────────────────│"<<endl;
		cout<<"│        菜单(输入数字以继续)        │"<<endl;
		cout<<"├────────────────────────────────────┤"<<endl; 
		cout<<"│1.创建链表──────────────────────────│"<<endl;
		cout<<"├────────────────────────────────────┤"<<endl; 
		cout<<"│2.增加节点──────────────────────────│"<<endl;
		cout<<"├────────────────────────────────────┤"<<endl; 
		cout<<"│3.移除节点──────────────────────────│"<<endl;
		cout<<"├────────────────────────────────────┤"<<endl;
		cout<<"│4.打印链表──────────────────────────│"<<endl;
		cout<<"├────────────────────────────────────┤"<<endl;
		cout<<"│5.链表中点──────────────────────────│"<<endl;
		cout<<"├────────────────────────────────────┤"<<endl;
		cout<<"│6.奇偶反转──────────────────────────│"<<endl;
		cout<<"├────────────────────────────────────┤"<<endl;
		cout<<"│7.销毁链表──────────────────────────│"<<endl;
		cout<<"├────────────────────────────────────┤"<<endl;
		cout<<"│8.退出程序──────────────────────────│"<<endl;
		cout<<"└────────────────────────────────────┘"<<endl;
		while(SHURU(&d))
		{
			error_();
			dd=1;
			break;
		}
		if(dd==1)
			continue;
		if(d==8)
		{
			return;
		}
		switch(d)
		{
			case 1 :creatlist2(&head,&tail,head,tail);break;
			case 2 :ADD_(&head,&tail,head,tail);break;
			case 3 :REMOVE_(&head,head);break;
			case 4 :SHUCHU(head);break;
			case 5 :ZHONG_(head);break;
			case 6 :ZHUAN_(&head,head);break;
			case 7 :DELETE_(&head,&tail,head,tail);break;
			default :error_();break;
		}
//		cout<<head->data<<endl;
//		cout<<tail->data<<endl;
//		system("pause");
	}while(1);
	return;
}
