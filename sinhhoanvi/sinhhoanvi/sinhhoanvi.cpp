#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[1000];
void init()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		a[i] = i;
	}
}
void display()
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int cmp(int a, int b)
{
	return a > b;
}
bool checkend()
{
	return is_sorted(a + 1, a + n + 1, cmp);
}
void gene()
{
	for (int i = n - 1; i > 0; i--)
	{
		if (a[i + 1] > a[i])
		{
			for (int j = n; j >= i; j--)
			{
				if (a[j] > a[i])
				{
					swap(a[j], a[i]);
					sort(a + i + 1, a + n + 1);
					break;
				}
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
