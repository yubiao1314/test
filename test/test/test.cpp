#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define STACK_INIT_SIZE 100//初始容量
#define STACK_CRAT_SIZE 1//增量
#define stauts  char
#define Elem   char
using namespace std;

typedef struct Stack
{
	stauts *base;
	stauts*top;
	int stacksizeof;
}SqStack;//栈

int InitalStack(Stack&s)
{
	s.base=(stauts*)malloc(STACK_INIT_SIZE*sizeof(stauts));
	if(!s.base)exit(0);
	s.top=s.base;
	s.stacksizeof=STACK_INIT_SIZE;
	return 1;
}//初始化栈，构建空栈

int EnStack(Stack&s, Elem e)
{
	if(s.top-s.base>=STACK_INIT_SIZE)
	{
		s.base=(stauts*)realloc(s.base,(STACK_INIT_SIZE+STACK_CRAT_SIZE)*sizeof(stauts));
	}
	if (!s.base)return 0;
	*s.top=e;
	s.top++;
}//入栈
 
int OutStack(Stack&s, Elem&e)
{
	if(s.top==s.base)return 0;
	s.top--;
	e=*s.top;
	return 1;
}//出栈

int GetStack(Stack s, Elem&e)
{
	if(s.top==s.base)return 0;
	e=*(s.top-1);
	return 1;
}//取栈顶元素

void JudgeSign(SqStack s, Elem* arr)
{
	cout << "输入字符：" << endl;
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
		cout << "括号匹配" << endl;
	}
	else
	{
		cout << "括号不匹配" << endl;
	}
}//判断括号匹配*/

/*void D_o(SqStack& s)
{
	int a;
	cin>>a;
	cout << "你输入的十进制数："<< a<<endl;
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
	cout << "转换的八进制数";
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
	InitalStack(s);//初始化栈
	JudgeSign(s, arr);//判断括号匹配
	//D_o(s);//输入一个十进制数输出八进制数
	return 0;
}