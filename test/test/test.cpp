#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define STACK_INIT_SIZE 100//��ʼ����
#define STACK_CRAT_SIZE 1//����
#define stauts  char
#define Elem   char
using namespace std;

typedef struct Stack
{
	stauts *base;
	stauts*top;
	int stacksizeof;
}SqStack;//ջ

int InitalStack(Stack&s)
{
	s.base=(stauts*)malloc(STACK_INIT_SIZE*sizeof(stauts));
	if(!s.base)exit(0);
	s.top=s.base;
	s.stacksizeof=STACK_INIT_SIZE;
	return 1;
}//��ʼ��ջ��������ջ

int EnStack(Stack&s, Elem e)
{
	if(s.top-s.base>=STACK_INIT_SIZE)
	{
		s.base=(stauts*)realloc(s.base,(STACK_INIT_SIZE+STACK_CRAT_SIZE)*sizeof(stauts));
	}
	if (!s.base)return 0;
	*s.top=e;
	s.top++;
}//��ջ
 
int OutStack(Stack&s, Elem&e)
{
	if(s.top==s.base)return 0;
	s.top--;
	e=*s.top;
	return 1;
}//��ջ

int GetStack(Stack s, Elem&e)
{
	if(s.top==s.base)return 0;
	e=*(s.top-1);
	return 1;
}//ȡջ��Ԫ��

void JudgeSign(SqStack s, Elem* arr)
{
	cout << "�����ַ���" << endl;
	cin >> arr;
	int j = 0;
	for (int i = 0; i < 100; i++)
	{
		char temp = 0;
		if (arr[i] == '(' || arr[i] == ')' || arr[i] == '[' || arr[i] == ']')
		{
			EnStack(s, arr[i]);
			j++;
			if (j >= 2)
			{
				GetStack(s, temp);
				if (temp - *(s.top - 2) >= 1 && temp - *(s.top - 2) <= 2)
				{
					OutStack(s, temp);
					OutStack(s, temp);
				}
			}

		}
		if (arr[i] == '\0')
			break;
	}
	if (s.base == s.top)
	{
		cout << "����ƥ��" << endl;
	}
	else
	{
		cout << "���Ų�ƥ��" << endl;
	}
}//�ж�����ƥ��*/

/*void D_o(SqStack& s)
{
	int a;
	cin>>a;
	cout << "�������ʮ��������"<< a<<endl;
	while (1)
	{
		if (a >= 8)
		{
			EnStack(s, a % 8);
			a = a / 8;
		}
		else
		{
			EnStack(s, a%8);
			break;
		}
	}
	cout << "ת���İ˽�����";
	while (s.base != s.top)
	{
		int e;
		OutStack(s, e);
		cout << e;
	}

}*/
int main()
{
	char arr[100]={0};
	SqStack s;
	InitalStack(s);//��ʼ��ջ
	JudgeSign(s, arr);//�ж�����ƥ��
	//D_o(s);//����һ��ʮ����������˽�����
	return 0;
}