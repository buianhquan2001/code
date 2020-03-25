#include <iostream>
#include <algorithm>
using namespace std;
int a[1000];
int n;
void display()
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << endl;
}
void backtracking(int k)
{
	for (int j = 0; j <= 1; j++)
	{
		a[k] = j;
		if (k == n - 1)
		{
			display();
		}
		else
		{
			backtracking(k + 1);
		}
	}
}
int main()
{
	cin >> n;
	backtracking(0);
	return 1;
}
