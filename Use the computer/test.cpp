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
		L->next=P;
	}
}
void Print(LinkList L)
{
	cout << "打印";
	LinkList P = L->next;
	while (P)
	{
		//printf("%d ", P->data);
		cout << " " << P->data;
		P = P->next;
	} 
}
void Insert(LinkList& L)
{
	int i = 0;
	int e = 0;
	LinkList p = L->next;
	cout << "请输入插入位序和插入元素";
	cin >> i>>e;
	for (int j=0; j < i; j++)
	{
		p = p->next;
	}
	LinkList q=(LinkList)malloc(sizeof(LNode));
	q->data = e;
	q->next = p->next;
	p->next = q;
}
void Delate(LinkList& L)
{
	int j = 1;
	int i = 0;
	int e = 0;
	cout << "请输入需要删除元素位序\n";
	cin >> i;
	LinkList p = L->next;
	for (j; j <= i; j++)
	{
		p = p->next;
	}
	LinkList q = p->next;
	e = p->data;
	p = q->next;
	free(q);
	cout << "你删除的元素为:" << e << endl;
	
}
int main()
{
	LinkList L;
	int n = 0;
	cout << "请输入单链表数据个数\n";
	cin>>n;
	CreatList_L(L, n);
	while (1)
	{
		cout << "请选择你需要的操作序号:1.插入； 2.删除；3.查找；4.输出" << endl;
		int a = 0;
		cin >> a;
		switch (a)
		{
		case 1:Insert(L);
			break;
			case 2:Delate(L);
			case 3:Found();
		case 4:Print(L);
			break;
		default:cout << "输入操作不合法";
			break;
		}
	}
	
}