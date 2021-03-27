#include<stdio.h>
#include<iostream>
#define STACK_INIT_SIZE 20
#define STACKINCREMENT 1 
#define status char
using namespace std;

typedef struct Stack 
{
	status* base;
	status* top;
	status stacksize;
}SqStack;

status InitStack(SqStack &s)
{
	s.base = (status*)malloc(STACK_INIT_SIZE * sizeof(status));
	if (!s.base)return 0;
	s.top = s.base;
	s.stacksize = STACK_INIT_SIZE;
	return 1;
}

status EnStack(SqStack &s, status &e)
{
	if (s.top - s.base >= s.stacksize)
	{
		s.base = (status*)realloc(s.base, (s.stacksize + STACKINCREMENT) * sizeof(status));
		if (!s.base)return 0;
		s.top = s.base + s.stacksize;
		s.stacksize += STACKINCREMENT;
	}
	*s.top++ = e;
	return 1;
}

status OutStack(SqStack &s, status &e)
{
	if (s.base == s.top)return 0;
	e = *--s.top;
	return 1;
}

void GetStack(SqStack s, status &e)
{
	if (s.base == s.top)return;
	e = *(s.top - 1);
}   

void CleanStack(SqStack &s)
{
	while (s.base != s.top)
	{
		--s.top;
	}
}

int main()
{
	SqStack s;
	InitStack(s);//¹¹Ôì¿ÕÕ»£»
	status x,y,z;
	char arr[20] = { 0 };
	cin >> arr;
	for (int i = 0; i < 20; i++)
	{
		if (arr[i] == '(' || arr[i] == ')' || arr[i] == '[' || arr[i] == ']')
		{
			if (arr[i] == '(')
			{
				EnStack(s, arr[i]);//Ñ¹Õ»£»
				while (arr[i+1] != '\0')
				{
					++i;
					if (arr[i] == '£©')
					{
						CleanStack(s);
						break;
						
					}
					else if (arr[i] == '['|| arr[i] == ']')
					{
						while (arr[i] == ']')
						{

						}
						EnStack(s, arr[i]);//Ñ¹Õ»£»
					}
				}
			}
			else if (arr[i] == '[')
			{
				EnStack(s, arr[i]);//Ñ¹Õ»£»
			}
			cout << "²»Æ¥Åä" << endl;
			break;
		}
		
	}
	
	
	OutStack(s, y);//³öÕ»£»
	GetStack(s,z);//»ñÈ¡Õ»¶¥£»
	return 0;
}