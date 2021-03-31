#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define Status int
#define Elemy char
#define STACK_INIT_SIZE 100
#define STACK_CRAT_SIZE 1
using namespace std;

typedef struct Stack
{
	int *base;
	int *top;
	int stacksizeof;
}SqStack;//Õ»

int InitalStack(Stack&s)
{
	s.base=(int*)malloc(STACK_INIT_SIZE*sizeof(int));
	if(!s.base)exit(0);
	s.top=s.base;
	s.stacksizeof=STACK_INIT_SIZE;
	return 1;
}//³õÊ¼»¯Õ»

int EnStack(Stack&s,Elemy e)
{
	if(s.top-s.base>=STACK_INIT_SIZE)
	{
		s.base=(int*)realloc(s.base,(STACK_INIT_SIZE+STACK_CRAT_SIZE)*sizeof(int));
	}
	if (!s.base)return 0;
	*s.top=e;
	s.top++;
}//ÈëÕ»
 
int OutStack(Stack&s,Elemy&e)
{
	if(s.top==s.base)return 0;
	s.top--;
	e=*s.top;
	return 1;
}//³öÕ»

int GetStack(Stack s,Elemy&e)
{
	if(s.top==s.base)return 0;
	e=*(s.top-1);
	return 1;
}//È¡Õ»¶¥ÔªËØ

void JudgeSign(SqStack s, char* arr)
{
	cout << "ÊäÈë×Ö·û£º" << endl;
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
		cout << "À¨ºÅÆ¥Åä" << endl;
	}
	else
	{
		cout << "À¨ºÅ²»Æ¥Åä" << endl;
	}
}//ÅÐ¶ÏÀ¨ºÅÆ¥Åä

int main()
{
	char arr[100]={0};
	SqStack s;
	InitalStack(s);
	JudgeSign(s, arr);//ÅÐ¶ÏÀ¨ºÅÆ¥Åä
	return 0;
}