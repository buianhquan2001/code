#include <iostream>
#include <string>
using namespace std;
int n, k;
int a[10000];
void init()
{
	cin >> n >> k;
	for (int i = 1; i <= k; i++)
	{
		a[i] = i;
	}
}
void gene()
{
	for (int i = k; i > 0; i--)
	{
		if (a[i] != n - k + i)
		{
			a[i]++;
			for (int j = i + 1; j <= k; j++)
			{
				a[j] = a[i] + j - i;
			}
			break;
		}
	}
}
void display()
{
	for (int i = 1; i <= k; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
bool checkend()
{
	if (a[1] == n - k + 1)
	{
		return true;
	}
	return false;
}
int main()
{
	init();
	display();
	while (!checkend())
	{
		gene();
		display();
	}
	display();
	return 0;
}