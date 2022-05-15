#include<iostream>
using namespace std;

#define SIZE 10

typedef struct
{
	char stackArr[SIZE];
	int topIndex;
	char name;
}Stack;

typedef Stack* pstack;
void INIT(pstack ps, char cStackName);
void PUSH(pstack ps, char ch);
char POP(pstack ps);

int main()
{
	Stack s1;

	INIT(&s1, 'A');

	PUSH(&s1, 's');
	PUSH(&s1, 't');
	PUSH(&s1, 'a');
	PUSH(&s1, 'c');
	PUSH(&s1, 'k');

	for (int i = 0; i < 5; i++)
	{
		cout << "Pop s1: " << POP(&s1) << "\n";
		cout << endl;
	}
}


void INIT(pstack ps, char c) //초기화
{
	ps->topIndex = -1;
	ps->name = c;
	cout << "Constructing stack" << ps->name << "\n";
}

void PUSH(pstack ps, char ch) //삽입
{
	if (ps->topIndex == SIZE)
	{
		cout << "Stack "<<ps->name<<" is full" << endl;
		return;
	}
	ps->stackArr[++ps->topIndex] = ch;
}

char POP(pstack ps) //삭제
{
	if (ps->topIndex == 0)
	{
		cout << "Stack " << ps->name << " is empty" << endl;
		return 0;
	}
	return ps->stackArr[ps->topIndex--];
}