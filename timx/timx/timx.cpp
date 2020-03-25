#include <iostream>
using namespace std;

int tim(int a[], int l, int r, int x)
{
	int mid = (l + r) / 2;
	if (l > r)
	{
		return -1;
	}
	if (x > a[mid])
	{
		return tim(a, mid + 1, r, x);
	}
	else if (x < a[mid])
	{
		return tim(a, l, mid - 1, x);
	}
	else if (x == a[mid])
	{
		return mid;
	}

}
int main()
{
	int a[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int x;
	cin >> x;
	cout << tim(a, 0, n - 1, x);
	return 0;
}
