#include<iostream>
#include<string>
#include<stack>
using namespace std;

stack <char> _stack;

void BrackTest(string inputStr);

int main()
{
	while (true)
	{
		string inputStr;
		cin >> inputStr;

		BrackTest(inputStr);
		return 0;
	}
}

void BrackTest(string inputStr)
{
	for (char ch : inputStr)
	{
		switch (ch)
		{
		case '(':
		case '[':
		case '{':
			_stack.push(ch);
			break;
		case')':
			if (_stack.top() == ch - 1)
				_stack.pop();
			break;
		case']':
		case'}':
			if (_stack.top() == ch - 2)
				_stack.pop();
			break;

		default:
			break;
		}
	}
	cout << "괄호 검사 ";
	if (_stack.size() == 0)
		cout << "성공";
	else
		cout << "실패";
}
