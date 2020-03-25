#include <iostream>
using namespace std;
long long a[10000];
int n;
bool checkend()
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			return false;
		}
	}
	return true;
}
void init()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
}
void display()
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << endl;
}
void gene()
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == 0)
		{
			a[i] = 1;
			for (int j = i + 1; j < n; j++)
			{
				a[j] = 0;
			}
			break;
		}
	}
}
int main()
{
	init();
	while (!checkend())
	{
		display();
		gene();
	}
	display();
	return 0;
}