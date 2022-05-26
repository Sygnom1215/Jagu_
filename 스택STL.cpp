#include<iostream>
#include<stack>
using namespace std;


int main()
{
	stack <int> _stack;

	_stack.push(1);

	for (int i = 0; i < 5; i++)
	{
		_stack.pop();
		cout << endl;
	}

	//if (_stack.size() == 0)
	//	cout << "Stack is empty";
}