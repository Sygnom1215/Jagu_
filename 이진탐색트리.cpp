#include<iostream>
#include<vector>
using namespace std;
vector<int> numbers;

void BinarySearch();

int main()
{
	cout << "������ �ּҰ�, �ִ밪 �Է�: ";
	int MIN, MAX;
	cin >> MIN >> MAX;
	for (int i = MIN; i <= MAX; i++)
		numbers.push_back(i);
	BinarySearch();
}

void BinarySearch()
{
	cout << "���̰� �´ٸ� yes, �� ���ٸ� up, �� ���ٸ� down�� �Է��ϼ���. " << endl;
	string answer;
	int Left = 0, Right = (int)numbers.size() - 1;
	while (Left <= Right)
	{
		int mid = (Left + Right) / 2;
		cout << "Searching Range : " << Left << Right << endl;
		cout << numbers[mid] << "�� �Դϱ�?" << endl;
		cin >> answer;

		if (answer == "YES")
		{
			cout << "wow" << endl;
			return;
		}
		else if (answer == "UP")
			Left = mid + 1;
		else if (answer == "DOWN")
			Right = mid - 1;
	}
	cout << "�� ���̿���?" << endl;
}
}
