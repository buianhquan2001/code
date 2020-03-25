#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[1000];
bool b[1000];
void display()
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void backtracking(int k)
{
	for (int i = 1; i <= n; i++)
	{
		if (b[i])
		{
			a[k] = i;
			b[i] = false;
			if (k == n)
			{
				display();
			}
			else
			{
				backtracking(k + 1);
			}
			b[i] = true;
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		b[i] = true;
	}
	backtracking(1);
	return 0;
}
