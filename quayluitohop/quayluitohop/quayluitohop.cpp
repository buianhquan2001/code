#include <iostream>
#include <algorithm>
using namespace std;
int a[1000];
int n,k;
void display()
{
	for (int i = 1; i <= k; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void backtracking(int i)
{
	for (int j = a[i-1]+1; j<= n-k+i; j++)
	{
		a[i] = j;
		if (i == k)
		{
			display();
		}
		else
		{
			backtracking(i+1);
		}
	}
}
int main()
{
	cin >> n >> k;
	a[0] = 0;
	backtracking(1);
	return 1;
}
