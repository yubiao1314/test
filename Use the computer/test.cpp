#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <stdlib.h> 
using namespace std;

typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode, * LinkList;
void CreatList_L(LinkList& L, int n)
{
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	cout<<"请输入单链表数据\n";
	for (int i = 0; i <n; i++)
	{
		LinkList P = (LinkList)malloc(sizeof(LNode));
		cin>>P->data;
		P->next = L->next;
		L->next = P;
		
	}
}
void Print(LinkList L)
{
	cout << "打印 ";
	LinkList P = L->next;
	while (P)
	{
		cout << " " << P->data;
		P = P->next;
	}
	cout << endl;
}
void Insert(LinkList& L,int n,int &e)
{
	int i = 0;
	cout << "请输入插入位序和插入元素\n";
	cin >> i>>e;
	if ((i > 0) && (i <=n))
	{
		int j = 1;
		LinkList p = L;
		while (p->next && j < (i - 1))
		{
			p = p->next;
			++j;
		}
		
		LinkList q = (LinkList)malloc(sizeof(LNode));
		q->data = e;
		q->next = p->next;
		p->next = q;
	}
	else cout << "输入不合法" << endl;
	
}
void Delate(LinkList& L,int n,int &e)
{
	int i = 0;
	cout << "请输入需要删除元素位序\n";
	cin >> i;
	if ((i > 0) && (i <= n))
	{
		int j = 1;
		LinkList p = L;
		while (p->next&&j<i-1)//调整指针指向所删除元素的前一结点
		{
			p = p->next;
			++j;
		}
		LinkList q = p->next;
		p->next = q->next;
		e = q->data;
		free(q);
		cout << "你删除的元素为:" << e << endl;
	}
	else cout << "你的输入不合法" << endl;
		
}
void Found(LinkList L,int n,int&e)
{
	cout << "请输入查找位序" << endl;
	int i = 0;
	cin >> i;
	if ((i > 0) && (i <= n))
	{
		LinkList p = L;
		int j = 1;
		while (p->next && j <= i)
		{
			p = p->next;
			++j;
		}
		cout << "你所查的值为：" << p->data << endl;
	}
	else cout << "你的输入不合法" << endl;
}
int main()
{
	LinkList L;
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cout << "请输入单链表数据个数\n";
	cin>>n;
	CreatList_L(L, n);
	while (1)
	{
		cout << "请选择你需要的操作序号:0.退出；1.插入；2.删除；3.查找；4.输出；" << endl;
		cin >> a;
		switch (a)
		{
		case 0:return 0;
		case 1:Insert(L,n,d);
			break;
		case 2:Delate(L,n,b);
			break;
		case 3:Found(L,n,c);
			break;
		case 4:Print(L);
			break;
		default:cout << "输入操作不合法"<<endl;
			break;
		}
	}
	
}