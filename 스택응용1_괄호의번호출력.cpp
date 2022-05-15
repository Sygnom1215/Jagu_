#include<iostream>
#include<string>
#include<stack>
using namespace std;

// 오직 괄호만 입력
// ( 가 나올 때마다 괄호번호 증가
// ) 가 나오면 매칭되는 왼쪽 괄호번호 출력

stack <int> _stack;
void Mathching(string brack);

int main()
{
	while (true)
	{
		string brack;
		cout << "수식	 : ";
		cin >> brack;
		cout << "괄호 번호: ";
		Mathching(brack);
		return 0;
	}
}

void Mathching(string brack)
{
	int count = 0;
	for (char str : brack)
	{
		if (str == '(')
		{
			++count;
			_stack.push(count);
			cout << count;
		}
		else if (str == ')')
		{
			cout << _stack.top();
			_stack.pop();
		}
	}
	cout << endl;
}