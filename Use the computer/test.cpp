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
		L->next = P;
		
	}
}
void Print(LinkList L)
{
	cout << "��ӡ ";
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
	cout << "���������λ��Ͳ���Ԫ��\n";
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
	else cout << "���벻�Ϸ�" << endl;
	
}
void Delate(LinkList& L,int n,int &e)
{
	int i = 0;
	cout << "��������Ҫɾ��Ԫ��λ��\n";
	cin >> i;
	if ((i > 0) && (i <= n))
	{
		int j = 1;
		LinkList p = L;
		while (p->next&&j<i-1)//����ָ��ָ����ɾ��Ԫ�ص�ǰһ���
		{
			p = p->next;
			++j;
		}
		LinkList q = p->next;
		p->next = q->next;
		e = q->data;
		free(q);
		cout << "��ɾ����Ԫ��Ϊ:" << e << endl;
	}
	else cout << "������벻�Ϸ�" << endl;
		
}
void Found(LinkList L,int n,int&e)
{
	cout << "���������λ��" << endl;
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
		cout << "�������ֵΪ��" << p->data << endl;
	}
	else cout << "������벻�Ϸ�" << endl;
}
int main()
{
	LinkList L;
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cout << "�����뵥�������ݸ���\n";
	cin>>n;
	CreatList_L(L, n);
	while (1)
	{
		cout << "��ѡ������Ҫ�Ĳ������:0.�˳���1.���룻2.ɾ����3.���ң�4.�����" << endl;
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
		default:cout << "����������Ϸ�"<<endl;
			break;
		}
	}
	
}