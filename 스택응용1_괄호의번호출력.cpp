#include<iostream>
#include<string>
#include<stack>
using namespace std;

// ���� ��ȣ�� �Է�
// ( �� ���� ������ ��ȣ��ȣ ����
// ) �� ������ ��Ī�Ǵ� ���� ��ȣ��ȣ ���

stack <int> _stack;
void Mathching(string brack);

int main()
{
	while (true)
	{
		string brack;
		cout << "����	 : ";
		cin >> brack;
		cout << "��ȣ ��ȣ: ";
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