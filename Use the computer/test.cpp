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
	cout<<"�����뵥��������\n";
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
	cout << "��ӡ";
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
	cout << "���������λ��Ͳ���Ԫ��";
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
	cout << "��������Ҫɾ��Ԫ��λ��\n";
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
	cout << "��ɾ����Ԫ��Ϊ:" << e << endl;
	
}
int main()
{
	LinkList L;
	int n = 0;
	cout << "�����뵥�������ݸ���\n";
	cin>>n;
	CreatList_L(L, n);
	while (1)
	{
		cout << "��ѡ������Ҫ�Ĳ������:1.���룻 2.ɾ����3.���ң�4.���" << endl;
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
		default:cout << "����������Ϸ�";
			break;
		}
	}
	
}