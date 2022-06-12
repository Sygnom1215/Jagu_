#include<iostream>
#include<vector>
using namespace std;
vector<int> numbers;

void BinarySearch();

int main()
{
	cout << "나이의 최소값, 최대값 입력: ";
	int MIN, MAX;
	cin >> MIN >> MAX;
	for (int i = MIN; i <= MAX; i++)
		numbers.push_back(i);
	BinarySearch();
}

void BinarySearch()
{
	cout << "나이가 맞다면 yes, 더 많다면 up, 더 적다면 down을 입력하세요. " << endl;
	string answer;
	int Left = 0, Right = (int)numbers.size() - 1;
	while (Left <= Right)
	{
		int mid = (Left + Right) / 2;
		cout << "Searching Range : " << Left << Right << endl;
		cout << numbers[mid] << "살 입니까?" << endl;
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
	cout << "몇 살이에요?" << endl;
}
}
